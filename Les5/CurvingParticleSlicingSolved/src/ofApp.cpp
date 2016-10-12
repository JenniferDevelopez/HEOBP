#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    particles[0] = new Particle();
    particles[1] = new CurvingParticle();
}

void ofApp::update() {
    particles[0]->move();
    particles[1]->move();
}

void ofApp::draw() {
    particles[0]->draw();
    particles[1]->draw();
}

void ofApp::keyPressed(int key) {
    particles[0] = new Particle();
    particles[1] = new CurvingParticle();
}