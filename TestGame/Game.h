#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#ifndef GAME_H
#define GAME_H
/*
	Class that acts as the game engine.
	Handles update loop and render loop.
*/
class Game
{
private:
	//Variables
	//Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	//Game objects
	sf::RectangleShape enemy;
	//Private functions
	void initVariables();
	void initWindow();
	void initEnemies();
public:
	//Constructors and Destructors
	Game();
	virtual ~Game();
	//Getter Setter
	const bool getWindowState() const;
	//Functions
	void PollEvents();
	void Update();
	void Render();
};
#endif
