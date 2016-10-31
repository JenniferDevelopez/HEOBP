#pragma once

#include "ofMain.h"

class Particle
{
	public:

		Particle(int x, int y);
		virtual ~Particle();

		virtual void move();
		void draw();
		void setColors(ofColor cColor, ofColor iColor, ofColor oColor);
	
		// Check if life-time is reached and return > true or false.
		bool isDead();

	protected:

		// Particle variables.
		ofPoint position;
		float radius;
		ofVec2f speed, pAngle;
		long lifeTime, MAX_lifeTime;

		ofColor centerColor, innerColor, outerColor;

};

