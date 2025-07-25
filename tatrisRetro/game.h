#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
	Game();
	~Game();
	void Draw();
	void MoveBlockLeft();
	void MoveBlockRight();
	void MoveBlockDown();
	void HandleInput();
	bool gameOver;
	int score;
	Music music;


private:
	Block GetRandomBlock();
	std::vector<Block> GetAllBlocks();
	bool IsBlockOutside();
	void RotateBlock();
	void LockBlock();
	void Reset();
	void UpdateScore(int linesCleared, int moveDownPoints);
	Grid grid;
	bool BlockFits();
	std::vector<Block> blocks;
	Block currentBlock;
	Block nextBlock;
	Sound clearSound;
	Sound rotateSound;
};

