#include "Snake.h"

Snake::Snake() {
  x = ofGetWidth() / 2;
  y = ofGetHeight() / 2;

  xdir = 1;
  ydir = 0;
}

void Snake::setGridSize(int gSize) { gridSize = gSize; }

void Snake::update() {
  x += xdir * gridSize;
  y += ydir * gridSize;

  x = ofClamp(x, 0, ofGetWidth() - gridSize);
  y = ofClamp(y, 0, ofGetHeight() - gridSize);
}

void Snake::changeDir(int xd, int yd) {
  xdir = xd;
  ydir = yd;
}

void Snake::show() {
  ofSetColor(255);
  ofDrawRectangle(x, y, gridSize, gridSize);
}
