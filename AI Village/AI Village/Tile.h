#ifndef TILE_H
#define TILE_H

struct TileCoords
		{ 
			int x; 
			int y; 
		};

class Tile
{
	public:
		Tile(const char* type, TileCoords coordinates);
		~Tile();

		const char* GetType();
		void SetType(const char* type);

		TileCoords GetTileCoords();

	private:
		const char* tileType;
		TileCoords tileCoords;
};

#endif