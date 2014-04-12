#include "Tile.h"

Tile::Tile(const char* type)
{
	tileType = type;
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