#include "GameSprite.h"

sf::Sprite GameSprite::GetSprite()
{
	return sprite;
}

void GameSprite::SetSprite(std::string spriteName)
{
	texture.loadFromFile("Sprites/" + spriteName);
	texture.setSmooth(false);
	sprite.setTexture(texture);
}

sf::Vector2f GameSprite::GetPosition()
{
	return sprite.getPosition();
}

void GameSprite::SetPosition(sf::Vector2f spritePos)
{
	sprite.setPosition(spritePos);
}

sf::Vector2u GameSprite::GetSize()
{
	return sprite.getTexture()->getSize();
}

GameSprite::GameSprite(sf::Vector2f spritePos) : GameObject()
{
	sprite.setPosition(spritePos);
}

GameSprite::~GameSprite()
{

}

void GameSprite::Update(double deltaTime)
{

}
void GameSprite::Render(sf::RenderWindow* window)
{
	window->draw(sprite);
}