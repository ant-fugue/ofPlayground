#include "Drop.h"

Drop::Drop() {
  x = ofRandom(ofGetWidth());
  y = ofRandom(-500, -100);

  float range[2] = {0, 20};
  float z = ofRandom(range[0], range[1]);

  len = ofMap(z, range[0], range[1], 10, 20);
  yspeed = ofMap(z, range[0], range[1], 1, 15);
  gravity = ofMap(z, range[0], range[1], 0.01, 0.2);
}

void Drop::fall() {
  y = y + yspeed;
  yspeed = yspeed + gravity;

  if (y > ofGetHeight()) {
    y = ofRandom(-200, -100);
    yspeed = ofMap(ofRandom(0, 20), 0, 20, 1, 15);
  }
}

void Drop::show() {
  float thickness = ofMap(len, 10, 20, 1, 3);
  ofSetColor(138, 43, 226);
  ofSetLineWidth(thickness);
  ofDrawLine(x, y, x, y + len);
}
