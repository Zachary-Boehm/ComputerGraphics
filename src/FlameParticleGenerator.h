#pragma once
#include "Particle.h"
#include "FlameParticle.h"


class FlameParticleGenerator : public ParticleGenerator<FlameParticle>
{
    // Called when a new particle needs to be generated. When the function returns, the particle 
    // referenced by the parameter should be reinitialied as a new, random particle.
    void respawn(FlameParticle& particle) const override;
};