#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    for (int i = 0; i < MAX_PARTICLES; i++) {
        particles.push_back(Particle());
    }
}

void ofApp::update() {
    for (vector<Particle>::iterator i = particles.begin(); i != particles.end(); i++) {
        i->move();
    }
}

void ofApp::draw() {
    for (vector<Particle>::iterator i = particles.begin(); i != particles.end(); i++) {
        i->draw();
    }
}

void ofApp::keyPressed(int key) {
    for (int i = 0; i < MAX_PARTICLES; i++) {
        particles.push_back(Particle());
    }
}
