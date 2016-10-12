
#include "Particle.h"

Particle::Particle(int x, int y)
{
	radius = ofRandom(1, 15);
	position = ofPoint(x, y);

	speed = ofVec2f(ofRandom(-2, 2), ofRandom(-2, 2));

	centerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 255);
	innerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 127);
	outerColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 15);

	lifeTime = 0;

	double MAX_lifeTime = 150 * (ofRandomf(0.8, 1.2));
}


Particle::~Particle()
{
}

void Particle::move()
{
	position += eSpeed;
	pAngle.rotate(2);
	position += eAngle;
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
	ofEnableBlendMode(OF_BLENDMODE_ADD); // Playing with blendmodes.

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
