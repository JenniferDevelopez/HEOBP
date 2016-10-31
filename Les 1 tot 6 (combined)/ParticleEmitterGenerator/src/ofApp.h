
#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#include "Particle.h"
#include "Emitter.h"
#include "Reaper.h"

class ofApp : public ofBaseApp
{
	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
		// Create emitter list
		vector <Emitter*> emitters;

		// Create particle list
		vector <Particle*> particles;

		Reaper reaper;

};
