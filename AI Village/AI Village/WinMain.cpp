#include <Windows.h>
#include <SFML/Graphics.hpp>
#include "GameSprite.h"

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	GameSprite* testChar = new GameSprite(0, 0);
	testChar->SetSprite("AITestSprite.png");

	sf::RenderWindow window(sf::VideoMode(800, 600), "AI Village");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(testChar->GetSprite());
		window.display();
	}

	return 0;
}