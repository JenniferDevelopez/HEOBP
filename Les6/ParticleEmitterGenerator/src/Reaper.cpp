#include "Reaper.h"

void Reaper::cleanup(vector<Particle*>& particles)
{

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

void Reaper::cleanup(vector<Emitter*>& emitters){

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
