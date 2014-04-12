#ifndef TILE_H
#define TILE_H

class Tile
{
	public:
		Tile(const char* type);
		~Tile();

		const char* GetType();
		void SetType(const char* type);

	private:
		const char* tileType;
};

#endif