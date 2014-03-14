#include <Windows.h>
#include <SFML/Graphics.hpp>

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	sf::Texture testTexture;
	testTexture.loadFromFile("Sprites/AITestSprite.png");
	testTexture.setSmooth(false);

	sf::Sprite testSprite;
	testSprite.setTexture(testTexture);

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
		window.draw(testSprite);
		window.display();
	}

	return 0;
}