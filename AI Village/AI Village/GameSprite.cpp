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

GameSprite::GameSprite(float x, float y) : GameObject()
{

}

GameSprite::~GameSprite()
{

}

void GameSprite::Update(double deltaTime)
{

}
void GameSprite::Render()
{

}