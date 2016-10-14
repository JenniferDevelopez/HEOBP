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
	
		bool isDead();

	protected:

		ofPoint position;
		float radius;
		ofVec2f speed, pAngle;
		long lifeTime, MAX_lifeTime;

		ofColor centerColor, innerColor, outerColor;

};

