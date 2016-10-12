#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    for (int i = 0; i < MAX_PARTICLES; ++i) {
        particles.push_back(new Particle());
        particles.push_back(new CurvingParticle());
    }
}

void ofApp::update() {
    for (int i = 0; i < particles.size(); ++i) {
        particles[i]->move();
    }
}

void ofApp::draw() {
    for (int i = 0; i < particles.size(); ++i) {
        particles[i]->draw();
    }
}

void ofApp::keyPressed(int key) {
    particles.clear();
    for (int i = 0; i < MAX_PARTICLES; ++i) {
        particles.push_back(new Particle());
        particles.push_back(new CurvingParticle());
    }
}
