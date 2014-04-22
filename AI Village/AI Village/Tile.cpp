#include "Tile.h"

Tile::Tile(const char* type, TileCoords coordinates)
{
	tileType = type;
	tileCoords = coordinates;
}

Tile::~Tile()
{

}

const char* Tile::GetType()
{
	return tileType;
}

void Tile::SetType(const char* type)
{
	tileType = type;
}

TileCoords Tile::GetTileCoords()
{
	return tileCoords;
}