#include "BasicParticle.h"

float BasicParticle::getLife() const
{
    return life;
}

void BasicParticle::setLife(float _life)
{
    this->life = _life;
}

void BasicParticle::setRotation(float newRotation)
{
    rotation = newRotation;
}

void BasicParticle::setBrightness(float newBrightness)
{
    brightness = newBrightness;
}

void BasicParticle::setPosition(glm::vec3 newPosition)
{
    position = newPosition;
}

void BasicParticle::setVelocity(glm::vec3 newVelocity)
{
    velocity = newVelocity;
}

void BasicParticle::setScale(glm::vec3 newScale)
{
    scale = newScale;
}

void BasicParticle::setColor(glm::vec4 newColor)
{
    color = newColor;
}

void BasicParticle::setSprite(int newSprite)
{
    sprite = newSprite;
}

void BasicParticle::update(float dt)
{
    //Life decrease by 0.5f per dt which is 0.5 per second
    life -= dt * 0.01f;

    //update position, velocity, etc

}

int  BasicParticle::getSprite() const
{
    return sprite;
}

float BasicParticle::getRotation() const
{
    return rotation;
}

float BasicParticle::getBrightness() const
{
    return brightness;
}

glm::vec3 BasicParticle::getPosition() const
{
    return position;
}

glm::vec3 BasicParticle::getVelocity() const
{
    return velocity;
}

glm::vec3 BasicParticle::getScale() const
{
    return scale;
}

glm::vec4 BasicParticle::getColor() const
{
    return color;
}
