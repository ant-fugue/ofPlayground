#include "ofApp.h"

#include "Drop.h"

vector<Drop> drops;
//--------------------------------------------------------------
void ofApp::setup() {
  ofSetBackgroundColor(230, 230, 250);
  for (int i = 0; i < 500; i++) {
    drops.push_back(Drop());
  }
}

//--------------------------------------------------------------
void ofApp::update() {
  for (int i = 0; i < sizeof(drops); i++) {
    drops[i].fall();
  }
}

//--------------------------------------------------------------
void ofApp::draw() {
  for (int i = 0; i < sizeof(drops); i++) {
    drops[i].show();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {}

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
