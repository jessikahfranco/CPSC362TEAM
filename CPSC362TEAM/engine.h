// engine.h
#pragma once
#include <SFML/Graphics.hpp>
#include "tuffy.h"
#include "enemy.h"

class Engine
{
private:
    sf::RenderWindow& m_Window; // Reference to the game window
    sf::Sprite m_BackgroundSprite;
    sf::Texture m_BackgroundTexture;
    Tuffy m_Tuffy;
    Enemy m_Enemy;
    static const int NUM_STARTING_POSITIONS = 3;
    static const sf::Vector2f STARTING_POSITIONS[NUM_STARTING_POSITIONS];


public:
    Engine(sf::RenderWindow& window); // Constructor accepting a window parameter
    void start();
    void input();
    void update(float dtAsSeconds);
    void draw();
    void duplicateEnemy(); // Declaration of duplicateEnemy() function

};
