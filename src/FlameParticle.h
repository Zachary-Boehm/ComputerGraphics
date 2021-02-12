#pragma once
#include "BasicParticle.h"

class FlameParticle : public BasicParticle
{
public:
	// Updates the particle for a specified time increment (dt).
	void update(float dt) override;
};