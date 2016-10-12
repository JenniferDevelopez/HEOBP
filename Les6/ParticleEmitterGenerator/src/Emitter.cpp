
#include "Emitter.h"

Emitter::Emitter()
{
	ePosition = ofPoint(ofGetMouseX(), ofGetMouseY);
	eOrigin = ePosition; //Set origin to begin value of ePosition.
	
	eAngle = ofVec2f(ofRandomf(-0.2, 0.2));
	eSpeed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
	
	eLifeTime = 0;
	MAX_eLifeTime = 700;
}

Emitter::~Emitter()
{

}

void Emitter::setOrigin(int x, int y)
{
	eOriginX = x;
	eOriginY = y;
}

void Emitter::update()
{
	ePosition += eSpeed;
	eAngle.rotate(2);
	ePosition += eAngle;

	eLifeTime++;
}

bool Emitter::isDead()
{
	return eLifeTime > MAX_eLifeTime;
}


Particle* Emitter::emit()
{

	//Particle setup and instances.
	if (ofGetFrameNum() % 5 == 0)
	{
		Particle* newParticle = new Particle(eOrigin.x, eOrigin.y);
		Particle* particles[i].push_back(newParticle);
	}

	for (unsigned int i = 0; i < particles.size(); i++)
	{
		newParticle -> move();
	}
}