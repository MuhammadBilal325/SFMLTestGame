#include "Game.h"
//Variable initializations
void Game::initVariables()
{
	this->window = nullptr;
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;
	this->window=new sf::RenderWindow(videoMode, "LmAo Xd", sf::Style::Close);
	this->window->setFramerateLimit(60);
}

void Game::initEnemies()
{
	this->enemy.setPosition(10,10);
	this->enemy.setSize(sf::Vector2f(50,50));
	this->enemy.setFillColor(sf::Color::Cyan);
	this->enemy.setOutlineColor(sf::Color::Green);
	this->enemy.setOutlineThickness(5);
}

//Constructors Destructors
Game::Game()
{
	this->initVariables();
	this->initWindow();
	this->initEnemies();
}

Game::~Game()
{
	delete this->window;
}

const bool Game::getWindowState() const
{
	return this->window->isOpen();
}

void Game::PollEvents()
{
	//Event polling
	while (this->window->pollEvent(this->ev)) {
		switch (this->ev.type) {
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

//Private functions
void Game::Update()
{
	PollEvents();

	//Relative to the screen
	//std::cout << "Mouse pos: " << sf::Mouse::getPosition().x << " " << sf::Mouse::getPosition().y << std::endl;
	//Relative to the window
	std::cout << "Mouse Pos:" << sf::Mouse::getPosition(*this->window).x << " " << sf::Mouse::getPosition(*this->window).y << std::endl;
}

void Game::Render()
{
	/*
	returns void
	
	-clears old window
	-renders new window
 
	*/


	this->window->clear();

	//Draw Game objects
	this->window->draw(this->enemy);

	this->window->display();
}
