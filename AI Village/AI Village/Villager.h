#ifndef VILLAGER_H
#define VILLAGER_H

#include <SFML/Graphics.hpp>

class Villager
{
	public:
		Villager();
		~Villager();

		virtual void Update(double deltaTime) = 0;
		virtual void Render(sf::RenderWindow* window) = 0;

	private:
		void MoveToTile(int tileX, int tileY);
};

#endif