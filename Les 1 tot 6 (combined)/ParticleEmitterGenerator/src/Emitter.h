
#pragma once

#include "ofMain.h"
#include "Particle.h"

class Emitter
{
	public:

		Emitter();
		virtual ~Emitter();
		
		void move();
		void draw();
		void emit();
		
		// Create a list to store the particles.
		vector <Particle*> particles;

		bool isDead();

		// Emitter properties.
		ofPoint ePosition, eOrigin;
		ofColor centerColor, innerColor, outerColor;

	private:

		// Private Emitter properties/
		int eLifeTime, MAX_eLifeTime;
		ofVec2f eSpeed, eAngle;

};

