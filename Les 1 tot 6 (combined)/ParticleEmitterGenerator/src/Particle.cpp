
#include "Particle.h"

Particle::Particle(int x, int y)
{
	radius = ofRandom(0.1f, 2.8f);
	position = ofPoint(x, y);

	speed = ofVec2f(ofRandom(-4, 4), ofRandom(-4, 4));
	pAngle = ofVec2f(ofRandomf() + ofRandomf());

	centerColor = 0;
	innerColor	= 0;
	outerColor	= 0;

	lifeTime = 0;

	// Make a the life-time a little bit different for every particle.
	MAX_lifeTime = 50 * (ofRandom(0.8, 1.2));
}


Particle::~Particle()
{
}

void Particle::move()
{
	position += speed;
	pAngle.rotate(2);
	position += pAngle;
}

void Particle::setColors(ofColor cColor, ofColor iColor, ofColor oColor)
{
	centerColor = cColor;
	innerColor = iColor;
	outerColor = oColor;
}

void Particle::draw()
{
	ofEnableAlphaBlending();
	// Particles that overlap get brighter.
	ofEnableBlendMode(OF_BLENDMODE_ADD);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius *1.7);
	

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius *0.17);

}

bool Particle::isDead()
{
	return lifeTime > MAX_lifeTime;
}
