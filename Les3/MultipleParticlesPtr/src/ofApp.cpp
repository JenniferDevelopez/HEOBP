#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    for (int i = 0; i < MAX_PARTICLES; i += 2) {
        particles[i] = new Particle();
        particles[i + 1] = new CurvingParticle();
    }
}

void ofApp::update() {
    for (int i = 0; i < MAX_PARTICLES; ++i) {
        particles[i]->move();
    }
}

void ofApp::draw() {
    for (int i = 0; i < MAX_PARTICLES; ++i) {
        particles[i]->draw();
    }
}

void ofApp::keyPressed(int key) {
    for (int i = 0; i < MAX_PARTICLES; i+=2) {
        particles[i] = new Particle();
        particles[i + 1] = new CurvingParticle();
    }
}