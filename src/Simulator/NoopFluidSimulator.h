
// NoopFluidSimulator.h

// Declares the cNoopFluidSimulator class representing a fluid simulator that performs nothing, it ignores all blocks





#pragma once

#include "FluidSimulator.h"





class cNoopFluidSimulator final :
	public cFluidSimulator
{
	using Super = cFluidSimulator;

public:

	using Super::Super;

private:

	void SimulateChunk(std::chrono::milliseconds a_Dt, int a_ChunkX, int a_ChunkZ, cChunk * a_Chunk) override
	{
		UNUSED(a_Dt);
		UNUSED(a_ChunkX);
		UNUSED(a_ChunkZ);
		UNUSED(a_Chunk);
	}

	void AddBlock(cChunk & a_Chunk, Vector3i a_Position, BLOCKTYPE a_Block) override
	{
		UNUSED(a_Block);
		UNUSED(a_Chunk);
	}

	std::unique_ptr<cFluidSimulatorData> CreateChunkData(void) override { return nullptr; }
} ;
