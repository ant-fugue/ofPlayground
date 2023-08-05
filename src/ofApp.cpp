#include "ofApp.h"

int gridSize = 20;

//--------------------------------------------------------------
void ofApp::setup() {
  ofSetFrameRate(10);
  s = Snake();
  s.setGridSize(gridSize);
  f = Food();
  f.setGridSize(gridSize);
  f.pickLocation();
}

//--------------------------------------------------------------
void ofApp::update() {
  if (s.eat(f)) {
    f.pickLocation();
  }
  s.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
  s.show();
  f.show();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
  if (key == OF_KEY_UP) {
    s.changeDir(0, -1);
  }
  if (key == OF_KEY_DOWN) {
    s.changeDir(0, 1);
  }
  if (key == OF_KEY_LEFT) {
    s.changeDir(-1, 0);
  }
  if (key == OF_KEY_RIGHT) {
    s.changeDir(1, 0);
  }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {}
