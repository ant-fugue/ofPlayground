#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
  xPos = 5;
  ofBackground(ofColor::black);
}

//--------------------------------------------------------------
void ofApp::update() {
  xPos += 2;
  if (xPos > ofGetWidth()) {
    xPos = 5;
  }
}

//--------------------------------------------------------------
void ofApp::draw() {
  ofSetColor(ofColor::red);
  ofDrawCircle(xPos, 200, 10);
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
