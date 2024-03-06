#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
 
using namespace sf;
 
class Enemy
{
private:
    Vector2f m_Position;
    Sprite m_Sprite;
    Texture m_Texture;
 
public:
    Enemy();
    Sprite getSprite();
 
};