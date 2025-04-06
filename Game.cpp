#include "Game.h"

//private functions
void Game::initVariables()
{
    this->window = nullptr;
    //Game logic
    this->endGame = false;
    this->points = 0;
}
void Game::initWindow()
{
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new sf::RenderWindow(this->videoMode,"Tetris game",sf::Style::Titlebar
     | sf::Style::Close);
    this->window->setFramerateLimit(60);
}

//Constructor / Deconstructor
Game::Game()
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}
//Accessors
const bool Game::getEndGame() const
{
    return this->endGame;
}
const bool Game::running() const
{
    return this->window->isOpen();
}
//Functions
void Game::pollEvents()
{
    //event polling
    while (this->window->pollEvent(this->ev))
    {
        switch (this->ev.type)
        {
        case sf::Event::Closed:
            this->window->close();
            break;
        case sf::Event::KeyPressed:
            if(this->ev.key.code == sf::Keyboard::Escape)
                this->window->close();
        default:
            break;
        }
    }
}
void Game::update()
{
    this->pollEvents();
    // condition that prompts end of the game
    if(!this->getEndGame())
    {
        //iterations
    }
}
void Game::render()
{
    this->window->clear();
    //Draw game objects
    //renders endgame
    if(this->getEndGame())
    {
        //endgame iterations
    }
    this->window->display();
}