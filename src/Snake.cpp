#include "Snake.h"

Snake::Snake() {
  x = ofGetWidth() / 2;
  y = ofGetHeight() / 2;
}

void Snake::setGridSize(int gSize) { gridSize = gSize; }

void Snake::show() {
  ofSetColor(255);
  ofDrawRectangle(x, y, gridSize, gridSize);
}
