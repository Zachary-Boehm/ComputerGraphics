#pragma once
#include "Particle.h"
#include "ofMain.h"

class BasicParticle : public Particle
{
public:
    //Getters -------------------------

    // Gets how much life the particle has left.  
    // When a particle's life is reduced to zero, it will be removed from the particle system.
    float getLife() const override;
    //Returns the sprite assigned to this particle
    int getSprite() const;
    //Returns the rotation of the particle
    float getRotation() const;
    //Returns the brightness of the particle
    float getBrightness() const;
    //Returns the current position of the particle
	glm::vec3 getPosition() const;
    //Returns the velocity of the particle
    glm::vec3 getVelocity() const;
    //Returns the scale of the particle
	glm::vec3 getScale() const;
    //Returns the color of the particle
    glm::vec4 getColor() const;

    //Setters -------------------------

    //Sets the current life of the particle
    void setLife(float _life);
    //Sets the rotation of the particle
    void setRotation(float newRotation);
    //Sets the brightness of the particle
    void setBrightness(float newBrightness);
    //Sets the current position of the particle
    void setPosition(glm::vec3 newPosition);
    //Sets the velocity that is to be applied to the particle
    void setVelocity(glm::vec3 newVelocity);
    //Sets the scale of the particle
    void setScale(glm::vec3 newScale);
    //Sets the color of the particle
    void setColor(glm::vec4 newColor);
    //Sets the sprite of the particle
    void setSprite(int newSprite);

    //Other Functions ----------------------

    // Updates the particle for a specified time increment (dt).
    void update(float dt) override;

private:
    float life{ 1.0f };
    float rotation{ 0.0f };
    float brightness{ 1.0f };
    glm::vec3 position{ glm::vec3(0.0, 0.0, 0.0) };
    glm::vec3 velocity{ glm::vec3(0.0, 0.0, 0.0) };
    glm::vec3 scale{ glm::vec3(1.0, 1.0, 1.0) };
    glm::vec4 color{ glm::vec4(1.0,1.0,1.0,1.0) };
    int sprite;
};