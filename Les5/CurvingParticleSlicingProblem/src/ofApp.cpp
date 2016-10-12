#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    part[0] = Particle();
    part[1] = CurvingParticle();
}

void ofApp::update() {
    part[0].move();
    part[1].move();
}

void ofApp::draw() {
    part[0].draw();
    part[1].draw();
}

void ofApp::keyPressed(int key) {
    part[0] = Particle();
    part[1] = CurvingParticle();
}
