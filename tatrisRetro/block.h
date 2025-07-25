#pragma once
#include<vector>
#include <map>
#include "Position.h"
#include "colors.h"

class Block
{
public:
	Block();
	void Draw(int offSetX, int offsetY);
	void Move(int row, int col);
	void Rotate();
	void UndoRotation();
	std::vector<Position> GetCellPositon();
	int id;
	std::map<int, std::vector<Position>> cells;
private:
	int cellSize;
	int rotationState;
	std::vector<Color> colors;
	int rowOffset;
	int colOffset;
};