
// CommandBlockEntity.h

// Declares the cCommandBlockEntity class representing a single command block in the world





#pragma once

#include "BlockEntity.h"





// tolua_begin

class cCommandBlockEntity : public cBlockEntity
{
	// tolua_end

	using Super = cBlockEntity;

  public:  // tolua_export
	/** Creates a new empty command block entity */
	cCommandBlockEntity(BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World);

	// cBlockEntity overrides:
	virtual void CopyFrom(const cBlockEntity & a_Src) override;
	virtual bool Tick(std::chrono::milliseconds a_Dt, cChunk & a_Chunk) override;
	virtual void SendTo(cClientHandle & a_Client) override;
	virtual bool UsedBy(cPlayer * a_Player) override;

	void SetLastOutput(const AString & a_LastOut);

	void SetResult(const NIBBLETYPE a_Result);

	// tolua_begin

	/** Sets the command block to execute a command in the next tick */
	void Activate(void);

	/** Sets the command */
	void SetCommand(const AString & a_Cmd);

	/** Retrieves stored command */
	const AString & GetCommand(void) const;

	/** Retrieves the last line of output generated by the command block */
	const AString & GetLastOutput(void) const;

	/** Retrieves the result (signal strength) of the last operation */
	NIBBLETYPE GetResult(void) const;

	// tolua_end

  private:
	/** Executes the associated command */
	void Execute();

	bool m_ShouldExecute;

	AString m_Command;

	AString m_LastOutput;

	NIBBLETYPE m_Result;
};  // tolua_export
