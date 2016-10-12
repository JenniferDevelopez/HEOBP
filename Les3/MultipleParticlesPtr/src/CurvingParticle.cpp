#include "CurvingParticle.h"

CurvingParticle::CurvingParticle() {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}

void CurvingParticle::move() {
    cout << "CurvingParticle::move" << endl;
    position += speed;
    curve.rotate(2);
    position += curve;
}