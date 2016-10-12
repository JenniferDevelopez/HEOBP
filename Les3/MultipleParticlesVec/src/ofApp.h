#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "CurvingParticle.h"

#define MAX_PARTICLES 50

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

        vector<Particle*> particles;
};
