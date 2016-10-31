
#include "Emitter.h"

Emitter::Emitter()
{
	ePosition = ofPoint(ofGetMouseX(), ofGetMouseY());
	eOrigin = ePosition; //Set origin to begin value of ePosition.
	
	eAngle = ofVec2f(ofRandomf()+ofRandomf());
	eSpeed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
	
	eLifeTime = 0;
	MAX_eLifeTime = 100;
}

Emitter::~Emitter()
{
	
}

void Emitter::move()
{
	ePosition += eSpeed;
	eAngle.rotate(2);
	ePosition += eAngle;

	eLifeTime++;

	for (unsigned int i = 0; i < particles.size(); i++)
	{

		particles[i]->move();
	}

}


bool Emitter::isDead()
{
	return eLifeTime > MAX_eLifeTime;
}


void Emitter::emit()
{
	Particle* newParticle;

	//Particle setup and instances.
	if (ofGetFrameNum() % 2 == 0)
	{
		eAngle = ofVec2f(ofRandomf() + ofRandomf());
		eSpeed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));

		newParticle = new Particle(eOrigin.x, eOrigin.y);

		centerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 255);
		innerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 127);
		outerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 15);
		// GENERATOR RANDOM COLORS FOR EVERY NEW PARTICLE
		newParticle->setColors(centerColor, innerColor, outerColor);

		//return newParticle; 
		particles.push_back(newParticle);
	}
}

void Emitter::draw()
{

	for (int i = 0; i < particles.size(); i++)
	{
		particles[i] -> draw();
	}
}
