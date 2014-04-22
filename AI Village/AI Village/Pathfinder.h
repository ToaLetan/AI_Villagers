#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "PathNode.h"
#include "World.h"

class Pathfinder
{
	public:
		static void CalculateGScore();
		static void CalculateHScore();

		static void CheckAdjacentTiles(Tile* parentTile);
		static void GeneratePath();
	private:
		Pathfinder();
		~Pathfinder();

		std::vector<PathNode*> openList;
		std::vector<PathNode*> closedList;
		std::vector<PathNode*> pathList;
};

#endif