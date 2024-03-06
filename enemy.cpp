#include "enemy.h"

Enemy::Enemy()
{
    m_Texture.loadFromFile("enemy.png");
    m_Sprite.setTexture(m_Texture);     
 
    m_Position.x = 425; 
    m_Position.y = 550;
 
}

Sprite Enemy::getSprite()
{
    return m_Sprite;
}
 
