#include "World.h"

World& World::GetInstance()
{
	static World instance;
	return instance;
}

void World::GenerateWorld(int numOfRows, int numOfColumns)
{
	for(int r = 0; r < numOfRows; r++)
	{
		for(int c = 0; c < numOfColumns; c++)
		{
			GameSprite* tile = new GameSprite(sf::Vector2f(0, 0) );

			tile->SetSprite("Tile_Grass.png");
			tile->SetPosition(sf::Vector2f(r * (float)tile->GetSize().x, c * (float)tile->GetSize().y) );
			tileList.push_back(*tile);
		}
	}
}

/*GameSprite* World::GetTile(int row, int col)
{
	GameSprite tile = tileList.at(row * col);
	return &tile;
}*/

void World::Update(double deltaTime)
{
	for(int i = 0; i < tileList.size(); i++)
	{
		tileList[i].Update(deltaTime);
	}
}

void World::Render(sf::RenderWindow* window)
{
	for(int i = 0; i < tileList.size(); i++)
	{
		tileList[i].Render(window);
	}
}