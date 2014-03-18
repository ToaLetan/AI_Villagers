#ifndef GAMESPRITE_H
#define GAMESPRITE_H

#include <SFML/Graphics.hpp>
#include <string>
#include "GameObject.h"

class GameSprite : public GameObject
{
	public:
		sf::Sprite GetSprite();
		void SetSprite(std::string spriteName);

		sf::Vector2f GetPosition();
		void SetPosition(sf::Vector2f spritePos);

		sf::Vector2u GetSize();

		GameSprite(sf::Vector2f spritePos);
		~GameSprite();

		void Update(double deltaTime);
		void Render(sf::RenderWindow* window);

private:
	float x;
	float y;
	float width;
	float height;
	
	sf::Texture texture;
	sf::Sprite sprite;
};

#endif