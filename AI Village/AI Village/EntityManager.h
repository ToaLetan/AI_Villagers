#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include "GameSprite.h"

class EntityManager
{
	public:
		GameSprite* GetEntityByName(std::string name);
		void AddEntity(GameSprite* obj);
		void RemoveEntity(GameSprite* obj);

		void Update(double deltaTime);
		void Render(sf::RenderWindow* window);
	private:
		std::vector<GameSprite> entityList;
};

#endif