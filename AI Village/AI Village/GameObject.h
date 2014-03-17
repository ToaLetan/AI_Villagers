#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <SFML/Graphics.hpp>

class GameObject
{
	public:
		virtual std::string GetName();
		virtual void SetName(std::string objName);

		virtual int GetLayer();
		virtual void SetLayer(int layerNum);

		GameObject();
		~GameObject();

		virtual void Update(double deltaTime) = 0;
		virtual void Render(sf::RenderWindow* window) = 0;

	protected:
		std::string name;
		int layer;
};

#endif