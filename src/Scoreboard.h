
// Scoreboard.h

// Implementation of a scoreboard that keeps track of specified objectives





#pragma once





class cObjective;
class cTeam;
class cWorld;

typedef cItemCallback<cObjective> cObjectiveCallback;
typedef cItemCallback<cTeam>      cTeamCallback;





// tolua_begin
class cObjective
{
public:

	typedef int Score;

	enum eCriteria
	{
		otDummy,

		otDeathCount,
		otPlayerKillCount,
		otTotalKillCount,
		otHealth,

		otAchievement,

		otStat,
		otStatItemCraft,
		otStatItemUse,
		otStatItemBreak,

		otStatBlockMine,
		otStatEntityKill,
		otStatEntityKilledBy
	};

	struct eType
	{
		eType(eCriteria a_Criteria) : m_Criteria(a_Criteria), m_SubCriteria(0) {}
		eType(eCriteria a_Criteria, int a_SubCriteria) : m_Criteria(a_Criteria), m_SubCriteria(a_SubCriteria) {}

		bool operator==(eType a_Other) { return m_Criteria == a_Other.m_Criteria && m_SubCriteria == a_Other.m_SubCriteria; }

		eCriteria m_Criteria;
		int m_SubCriteria;
	};

	//typedef AString eType;

	// For the "Scoreboard Objective" packet
	enum eUpdateAction
	{
		uaCreate = 0,
		uaRemove = 1,
		uaUpdateText = 2
	};

	static eType StringToType(const AString & a_Name);

	// tolua_end

	static AString TypeToString(eType a_Type);

public:

	cObjective(const AString & a_Name, const AString & a_DisplayName, eType a_Type, cWorld * a_World);

	// tolua_begin

	eType GetType(void) const { return m_Type; }

	const AString & GetName(void)        const { return m_Name; }
	const AString & GetDisplayName(void) const { return m_DisplayName; }

	/** Resets the objective */
	void Reset(void);

	/** Returns the score of the specified player */
	Score GetScore(const AString & a_Name) const;

	/** Sets the score of all tracked players */
	void SetAllScores(Score a_Score);

	/** Sets the score of the specified player */
	void SetScore(const AString & a_Name, Score a_Score);

	/** Resets the score of the specified player */
	void ResetScore(const AString & a_Name);

	/** Adds a_Delta and returns the new score */
	Score AddScore(const AString & a_Name, Score a_Delta);

	/** Subtracts a_Delta and returns the new score */
	Score SubScore(const AString & a_Name, Score a_Delta);

	void SetDisplayName(const AString & a_Name);

	// tolua_end

	/** Returns a set of all players */
	AStringVector GetPlayers(void) const;  // Exported in ManualBindings.cpp

	/** Send this objective to the specified client */
	void SendTo(cClientHandle & a_Client);

	static const char * GetClassStatic(void)  // Needed for ManualBindings's ForEach templates
	{
		return "cObjective";
	}


private:

	typedef std::pair<AString, Score> cTrackedPlayer;

	typedef std::map<AString, Score> cScoreMap;

	cScoreMap m_Scores;

	AString m_DisplayName;
	AString m_Name;

	eType m_Type;

	cWorld * m_World;

	friend class cScoreboardSerializer;


};  // tolua_export





// tolua_begin
class cTeam
{
public:

	enum eProtocolAction
	{
		paCreateTeam = 0,
		paRemoveTeam = 1,
		paUpdateTeam = 2
	};

	// tolua_end

	cTeam(
		const AString & a_Name, const AString & a_DisplayName,
		const AString & a_Prefix, const AString & a_Suffix,
		cWorld * a_World
	);

	// tolua_begin

	/** Adds a new player to the team */
	bool AddPlayer(const AString & a_Name);

	/** Removes a player from the team */
	bool RemovePlayer(const AString & a_Name);

	/** Returns whether the specified player is in this team */
	bool HasPlayer(const AString & a_Name) const;

	/** Removes all registered players */
	void Reset(void);

	// tolua_begin

	/** Returns the number of registered players */
	size_t GetNumPlayers(void) const;

	bool AllowsFriendlyFire(void)      const { return m_AllowsFriendlyFire; }
	bool CanSeeFriendlyInvisible(void) const { return m_CanSeeFriendlyInvisible; }

	const AString & GetDisplayName(void) const { return m_DisplayName; }
	const AString & GetName(void)        const { return m_Name; }

	const AString & GetPrefix(void) const { return m_Prefix; }
	const AString & GetSuffix(void) const { return m_Suffix; }

	void SetFriendlyFire(bool a_Flag);
	void SetCanSeeFriendlyInvisible(bool a_Flag);

	void SetDisplayName(const AString & a_Name);

	void SetPrefix(const AString & a_Prefix);
	void SetSuffix(const AString & a_Suffix);

	void SetColor(int a_Color);
	int GetColor(void) const { return m_Color; }

	std::set<AString> GetMembers(void) const { return m_Players; }

	// tolua_end

	static const char * GetClassStatic(void)  // Needed for ManualBindings's ForEach templates
	{
		return "cTeam";
	}

private:

	typedef std::set<AString> cPlayerNameSet;

	cWorld * m_World;

	bool m_AllowsFriendlyFire;
	bool m_CanSeeFriendlyInvisible;

	AString m_DisplayName;
	AString m_Name;

	AString m_Prefix;
	AString m_Suffix;

	cPlayerNameSet m_Players;

	int m_Color;

	friend class cScoreboardSerializer;


};  // tolua_export





// tolua_begin
class cScoreboard
{
public:

	enum eDisplaySlot
	{
		dsList = 0,
		dsSidebar,
		dsName,

		dsTeamBlack,
		dsTeamDarkBlue,
		dsTeamDarkGreen,
		dsTeamDarkAqua,
		dsTeamDarkRed,
		dsTeamDarkPurple,
		dsTeamGold,
		dsTeamGray,
		dsTeamDarkGray,
		dsTeamBlue,
		dsTeamGreen,
		dsTeamAqua,
		dsTeamRed,
		dsTeamLightPurple,
		dsTeamYellow,
		dsTeamWhite,

		dsCount
	};

	// For the "Update Score" packet
	enum eUpdateAction
	{
		uaUpsert = 0,
		uaRemove = 1
	};

	// tolua_end


public:

	cScoreboard(cWorld * a_World);

	// tolua_begin

	/** Registers a new scoreboard objective, returns the cObjective instance, nullptr on name collision */
	cObjective * RegisterObjective(const AString & a_Name, const AString & a_DisplayName, cObjective::eType a_Type);

	/** Removes a registered objective, returns true if operation was successful */
	bool RemoveObjective(const AString & a_Name);

	/** Retrieves the objective with the specified name, nullptr if not found */
	cObjective * GetObjective(const AString & a_Name);

	/** Registers a new team, returns the cTeam instance, nullptr on name collision */
	cTeam * RegisterTeam(const AString & a_Name, const AString & a_DisplayName, const AString & a_Prefix, const AString & a_Suffix);

	/** Removes a registered team, returns true if operation was successful */
	bool RemoveTeam(const AString & a_Name);

	/** Retrieves the team with the specified name, nullptr if not found */
	cTeam * GetTeam(const AString & a_Name);

	void SetDisplay(const AString & a_Objective, eDisplaySlot a_Slot);

	cObjective * GetObjectiveIn(eDisplaySlot a_Slot);

	size_t GetNumObjectives(void) const;

	size_t GetNumTeams(void) const;

	void AddPlayerScore(const AString & a_Name, cObjective::eType a_Type, cObjective::Score a_Value = 1);

	// tolua_end

	/** Retrieves the list of team names */
	AStringVector GetTeamNames();  // Exported in ManualBindings.cpp

	/** Send this scoreboard to the specified client */
	void SendTo(cClientHandle & a_Client);

	/** Tell the specified client to forget all about us */
	void RemoveFrom(cClientHandle & a_Client);

	cTeam * QueryPlayerTeam(const AString & a_Name);  // WARNING: O(n logn)

	/** Execute callback for each objective with the specified type
	Returns true if all objectives processed, false if the callback aborted by returning true. */
	bool ForEachObjectiveWith(cObjective::eType a_Type, cObjectiveCallback & a_Callback);

	/** Execute callback for each objective.
	Returns true if all objectives have been processed, false if the callback aborted by returning true. */
	bool ForEachObjective(cObjectiveCallback & a_Callback);  // Exported in ManualBindings.cpp

	/** Execute callback for each team.
	Returns true if all teams have been processed, false if the callback aborted by returning true. */
	bool ForEachTeam(cTeamCallback & a_Callback);  // Exported in ManualBindings.cpp

	void SetDisplay(cObjective * a_Objective, eDisplaySlot a_Slot);


private:

	typedef std::pair<AString, cObjective> cNamedObjective;
	typedef std::pair<AString, cTeam>      cNamedTeam;

	typedef std::map<AString, cObjective> cObjectiveMap;
	typedef std::map<AString, cTeam>      cTeamMap;

	// TODO 2014-01-19 xdot: Potential optimization - Sort objectives based on type
	cCriticalSection m_CSObjectives;
	cObjectiveMap m_Objectives;

	cCriticalSection m_CSTeams;
	cTeamMap m_Teams;

	cWorld * m_World;

	cObjective * m_Display[dsCount];

	friend class cScoreboardSerializer;


};  // tolua_export




