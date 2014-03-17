#include "EntityManager.h"

EntityManager& EntityManager::GetInstance()
{
	static EntityManager instance;
	return instance;
}

GameSprite* EntityManager::GetEntityByName(std::string name)
{
	GameSprite* returnSprite = NULL;

	for(int i = 0; i < entityList.size(); i++)
	{
		GameSprite* currentSprite = &entityList[i];

		if(currentSprite->GetName() == name )
			returnSprite = currentSprite;
	}

	return returnSprite;
}

void EntityManager::AddEntity(GameSprite* obj)
{
	GameSprite newEntity = *obj;
	entityList.push_back(newEntity);
}

void EntityManager::RemoveEntity(GameSprite* obj)
{

}

void EntityManager::Update(double deltaTime)
{
	for(int i = 0; i < entityList.size(); i++)
	{
		entityList[i].Update(deltaTime);
	}
}

void EntityManager::Render(sf::RenderWindow* window)
{
	for(int i = 0; i < entityList.size(); i++)
	{
		entityList[i].Render(window);
	}
}