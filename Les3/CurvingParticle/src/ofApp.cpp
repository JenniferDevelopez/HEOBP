#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    part1 = Particle();
    part2 = CurvingParticle();
}

void ofApp::update() {
    part1.move();
    part2.move();
}

void ofApp::draw() {
    part1.draw();
    part2.draw();
}

void ofApp::keyPressed(int key) {
    part1 = Particle();
    part2 = CurvingParticle();
}