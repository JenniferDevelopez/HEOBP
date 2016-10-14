
#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Emitter.h"

class Reaper
{
	public:

		void cleanup(vector<Particle*>& particles);
		void cleanup(vector<Emitter*>& emitters);

};

