#include "Food.h"

Food::Food() {}

void Food::pickLocation() {
  x = floor(ofRandom(ofGetWidth()) / gridSize) * gridSize;
  y = floor(ofRandom(ofGetHeight()) / gridSize) * gridSize;
}

void Food::setGridSize(int gSize) { gridSize = gSize; }

void Food::show() {
  ofSetColor(0, 0, 255);
  ofDrawRectangle(x, y, gridSize, gridSize);
}