#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

class Game
{
private:
    
    //Variables
    //Window
    sf::RenderWindow *window;
    sf::VideoMode videoMode;
    sf::Event ev;
    //Game Objects

    //resources

    //Text

    //Game Logic
    bool endGame;
    unsigned points;
    float blocksSpawnTimer;
    float blocksSpawnTimerMax;

    //Game objects
    
    //Private functions
    void initVariables();
    void initWindow();
public:
    //Costructors / Deconstructors
    Game();
    virtual ~Game();

    //accessors
    const bool running() const;
    const bool getEndGame() const;

    //Functions
    void pollEvents();
    void update();
    
    void render();
};

