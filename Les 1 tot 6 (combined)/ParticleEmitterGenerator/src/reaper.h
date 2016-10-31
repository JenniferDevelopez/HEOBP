
#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Emitter.h"
#include "Reaper.h"

class Reaper
{
	public:

		// Create instance..
		static Reaper* instance();

		// Clean up function for both.
		void cleanup(vector<Particle*> particles);
		void cleanup(vector<Emitter*> emitters);

	private:

		Reaper();

		static Reaper* theReaper;

};

