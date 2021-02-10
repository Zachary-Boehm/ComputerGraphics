#pragma once
#include "BasicParticle.h"

class FlameParticle : public BasicParticle
{
	// Updates the particle for a specified time increment (dt).
	void update(float dt) override;
};