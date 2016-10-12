
#pragma once

#include "ofApp.h"
#include "Particle.h"

class Emitter
{
	public:

		Emitter();
		virtual ~Emitter();

		virtual void setOrigin(int x, int y);
		void update();

		// I am doing something wrong...
		Particle* emit();
		
		vector <Particle*> particles;

		bool isDead();

	private:

		ofPoint ePosition, eOrigin;
		int eLifeTime, MAX_eLifeTime;
		ofVec2f eSpeed, eAngle;

};

