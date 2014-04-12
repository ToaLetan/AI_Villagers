#ifndef PATHNODE_H
#define PATHNODE_H

#include "Tile.h"

class PathNode
{
public:
	int GetGScore();
	void SetGScore(int score_G);

	int GetHScore();
	void SetHScore(int score_H);

	int CalculateFScore();

	PathNode* GetParentNode();
	void SetParentNode(PathNode* parent);

	PathNode(Tile* tile);
	~PathNode();

private:
	int gScore; //The movement cost from the previous tile to this one.
	int hScore; //The movement cost from the previous tile to the end tile.

	Tile* nodeTile;
	PathNode* parentNode;
};

#endif