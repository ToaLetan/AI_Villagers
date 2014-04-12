#include "PathNode.h"
#include <stdlib.h>

PathNode::PathNode(Tile* tile)
{
	nodeTile = tile;
	parentNode = NULL;
	gScore = 0;
	hScore = 0;
}

PathNode::~PathNode()
{

}

int PathNode::GetGScore()
{
	return gScore;
}

void PathNode::SetGScore(int score_G)
{
	gScore = score_G;
}

int PathNode::GetHScore()
{
	return hScore;
}

void PathNode::SetHScore(int score_H)
{
	hScore = score_H;
}

int PathNode::CalculateFScore()
{
	return gScore + hScore;
}

PathNode* PathNode::GetParentNode()
{
	return parentNode;
}

void PathNode::SetParentNode(PathNode* parent)
{
	parentNode = parent;
}