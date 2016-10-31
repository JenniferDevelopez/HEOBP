
#include "Emitter.h"

Emitter::Emitter()
{
	ePosition = ofPoint(ofGetMouseX(), ofGetMouseY());
	eOrigin = ePosition; //Set origin to begin value of ePosition.
	
	eAngle = ofVec2f(ofRandomf()+ofRandomf());
	eSpeed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));
	
	// Set emitter life-time.
	eLifeTime = 0;
	MAX_eLifeTime = 100;
}

Emitter::~Emitter()
{
	
}

void Emitter::move()
{
	// Move, rotate
	ePosition += eSpeed;
	eAngle.rotate(2);
	ePosition += eAngle;

	// Increment life-time
	eLifeTime++;

	// All particles of this emitter instance move ( ofApp > update )
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
	// Generate new particles and push them into the list.
	Particle* newParticle;

	//Ceate a particle, every two frames.
	if (ofGetFrameNum() % 2 == 0)
	{
		// Set variables random per particle.
		eAngle = ofVec2f(ofRandomf() + ofRandomf());
		eSpeed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));

		newParticle = new Particle(eOrigin.x, eOrigin.y);

		// Generate random color again.
		centerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 255);
		innerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 127);
		outerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 15);

		newParticle->setColors(centerColor, innerColor, outerColor);

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
