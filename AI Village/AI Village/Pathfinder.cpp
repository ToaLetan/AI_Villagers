#include "Pathfinder.h"

void Pathfinder::CalculateGScore()
{
	//Calculate the movement cost from the initial location to this tile.
}

void Pathfinder::CalculateHScore()
{
	//Calculate the heuristic movement cost from this tile to the destination tile. (think rise over run)
}

void Pathfinder::CheckAdjacentTiles(Tile* parentTile)
{

}

void Pathfinder::GeneratePath()
{
	//Create a path node for the current tile, add it to the front of the openList.
	//Grab all eligible tiles adjacent to the current tile, add them to the openList.
	//Set the current tile as the parent of the eligible adjacent tiles.
	//Remove the current tile from the openList and place it in the closedList.
	//Choose the adjacent tile with the lowest F score, move it into the closedList.
	//Check the tiles adjacent to the lowest F score tile if they're eligible and not currently in the openList.
	//If they're in the openList already, compare G scores and if the new tile is lower, swap its parent to the current tile and recalculate F and G scores.

	//This process repeats until an optimal path is generated.
}

Pathfinder::Pathfinder()
{

}

Pathfinder::~Pathfinder()
{

}