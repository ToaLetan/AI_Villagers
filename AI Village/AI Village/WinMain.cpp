#include <Windows.h>
#include <SFML/Graphics.hpp>
#include "GameSprite.h"
#include "EntityManager.h"
#include "World.h"

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	EntityManager* testManager = &EntityManager::GetInstance();

	//Generate a world, 50x38 for now because of window size (800/16, 600/16).
	World* world = &World::GetInstance();

	world->GenerateWorld(50, 38);

	//Manually instantiating 3 characters to test entity management.
	GameSprite* testChar = new GameSprite(sf::Vector2f(20, 40) );
	testChar->SetSprite("AITestSprite.png");

	GameSprite* testChar2 = new GameSprite(sf::Vector2f(60, 120) );
	testChar2->SetSprite("AITestSprite.png");

	GameSprite* testChar3 = new GameSprite(sf::Vector2f(200, 90) );
	testChar3->SetSprite("AITestSprite.png");

	testManager->AddEntity(testChar);
	testManager->AddEntity(testChar2);
	testManager->AddEntity(testChar3);


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
		//window.draw(testChar->GetSprite());
		world->Render(&window);
		testManager->Render(&window);
		window.display();
	}

	return 0;
}