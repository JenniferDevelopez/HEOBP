#include "Reaper.h"

// Create the only instance, if not present.
Reaper* Reaper::instance() {
	if (!theReaper) {
		theReaper = new Reaper();
	}
	return theReaper;
}


void Reaper::cleanup(vector<Particle*> particles)
{
	// Iterate through the Particles list and check if life-time is met (isDead)
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();)
	{
		if ((*it)->isDead())
		{
			delete *it;
			it = particles.erase(it);
		}
		else
		{
			it++;
		}
	}
}

void Reaper::cleanup(vector<Emitter*> emitters){

	// Iterate through the Emitters list and check if life-time is met (isDead)
	for (vector<Emitter*>::iterator it = emitters.begin(); it != emitters.end();)
	{
		if ((*it)->isDead())
		{
			delete *it;
			it = emitters.erase(it);
		}
		else
		{
			it++;
		}
	}


} 

Reaper* Reaper::theReaper = 0;