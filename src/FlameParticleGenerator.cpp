#include "FlameParticleGenerator.h"

void FlameParticleGenerator::respawn(FlameParticle& particle) const
{
	particle.setLife(120.0f);

	//randomize particle parameters

	//Set the sprite
	particle.setSprite(1);


	//Random Position
	glm::vec3 pos;
	int r = rand() % 1001; // Generates a random number between 0 and 1000.
	float Max = .1; //Max position
	float Min = -.1; // Min position
	float random = ((float(rand()) / float(RAND_MAX)) * (Max - Min)) + Min;
	//set Position scale and rotation
	pos.x = random; // Results in a random floating-point number between // 0.0 and 1.0, with precision to the 100thsplace.;
	pos.y = random;
	pos.z = 0.0;
	cout << pos << endl;
	particle.setPosition(pos);
	//Random rotation
	Max = .10;
	Min = .15;
	float rot = random;
	particle.setRotation(rot);
	//Random Scale
	//set color random


}


