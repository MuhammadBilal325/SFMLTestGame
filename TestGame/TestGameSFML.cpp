#include<iostream>
#include"Game.h";
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace std;
using namespace sf;
int main()
{
	//Windows stuff
	Game game;
	//GameLoop
	while (game.getWindowState()) {
		
		//Update

		game.Update();

		//Render
		game.Render();


		
	}
	system("pause");

}