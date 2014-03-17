#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include "GameSprite.h"

//Singleton class used to handle all entities on screen.
class EntityManager
{
	public:
		static EntityManager& GetInstance();

		GameSprite* GetEntityByName(std::string name);
		void AddEntity(GameSprite* obj);
		void RemoveEntity(GameSprite* obj);

		void Update(double deltaTime);
		void Render(sf::RenderWindow* window);
	private:
		std::vector<GameSprite> entityList;

		EntityManager() {};
		EntityManager(EntityManager const&); //Prevents copy construction from occurring
		void operator=(EntityManager const&); //Prevents assignment
};

#endif