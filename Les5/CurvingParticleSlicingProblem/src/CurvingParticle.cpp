#include "CurvingParticle.h"

CurvingParticle::CurvingParticle() {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
    centerColour = ofColor::red;
}

void CurvingParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
}
