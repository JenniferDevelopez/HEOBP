
#include "ofApp.h"


void ofApp::setup(){

	ofBackground(ofColor::darkGray);

}

void ofApp::update()
{
	if (ofGetFrameNum() % 5 == 0)
	{
		Emitter* newEmitter = new Emitter();
		newEmitter->emit();
		newEmitter->setOrigin();
		emitters.push_back(newEmitter);
	}

	for (unsigned int i = 0; i < particles.size(); ++i) {
		emitters[i]->update();
	}

	// reaper.cleanup(particles);
	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw(){

	for (unsigned int i = 0; i < emitters.size(); ++i) {
		emitters[i]->draw();
	}

	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}

}

void ofApp::keyPressed(int key){


}
