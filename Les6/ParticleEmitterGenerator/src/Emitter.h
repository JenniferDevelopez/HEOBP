
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
		
		vector <Particle*> particles;

		bool isDead();

		ofPoint ePosition, eOrigin;
		ofColor centerColor, innerColor, outerColor;

	private:

		int eLifeTime, MAX_eLifeTime;
		ofVec2f eSpeed, eAngle;

};

