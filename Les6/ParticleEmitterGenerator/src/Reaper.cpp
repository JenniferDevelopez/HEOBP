
#include "reaper.h"

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

	for (vector<Emitter*>::iterator it = particles.begin(); it != emitters.end();)
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
