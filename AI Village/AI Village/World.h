#ifndef WORLD_H
#define WORLD_H

#include <SFML/Graphics.hpp>
#include "GameSprite.h"

//Singleton class used to generate the environment. Will eventually be used for procedural generation.
class World
{
	public:
		static World& GetInstance();

		void GenerateWorld(int numOfRows, int numOfColumns);
		//GameSprite* GetTile(int row, int col);

		void Update(double deltaTime);
		void Render(sf::RenderWindow* window);
	private:
		std::vector<GameSprite> tileList;
		int numRows;
		int numCols;

		World() {};
		World(World const&); //Prevents copy construction from occurring
		void operator=(World const&); //Prevents assignment
};

#endif