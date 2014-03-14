#ifndef GAMESPRITE_H
#define GAMESPRITE_H

#include <SFML/Graphics.hpp>
#include <string>
#include "GameObject.h"

class GameSprite : protected GameObject
{
	public:
		virtual sf::Sprite GetSprite();
		virtual void SetSprite(std::string spriteName);

		GameSprite(float x, float y);
		~GameSprite();

		void Update(double deltaTime);
		void Render();

private:
	float x;
	float y;
	float width;
	float height;
	
	sf::Texture texture;
	sf::Sprite sprite;
};

#endif