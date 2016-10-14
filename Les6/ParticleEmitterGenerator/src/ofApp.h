
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
		
		vector <Emitter*> emitters;

		vector <Particle*> particles;

		Reaper reaper;

		/*
		ofxPanel gui;
		ofxParamGroup guiSettings;
		*/

};
