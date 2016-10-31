
#include "ofApp.h"
#include "ofMain.h"


void ofApp::setup(){

	ofSetFrameRate(30);

}

void ofApp::update()
{
	if (ofGetFrameNum() % 5 == 0) // Every 5 frames
	{
		// Create new emitter and pushback in the emitters list.
		Emitter* newEmitter = new Emitter();
		emitters.push_back(newEmitter);
	}

	for (unsigned int i = 0; i < emitters.size(); ++i) {
		// Let every emitter generate a particle and move them per frame.
		emitters[i]->emit();
		emitters[i]->move();
	}

	// Run the reaper of the emitters and particles. 
	// Both have different properties such as life-time.
	reaper.cleanup(emitters);
	reaper.cleanup(particles);

	ofSetWindowTitle( "Emitters: " + ofToString( emitters.size() ) + "Particles: " + ofToString( particles.size() ));
}

void ofApp::draw(){

	ofSetBackgroundColor(10, 3, 2);

	for (unsigned int i = 0; i < emitters.size(); ++i) {
		emitters[i]->draw();
	}

}

void ofApp::keyPressed(int key){


}
