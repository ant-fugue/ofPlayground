#include "Snake.h"

Snake::Snake() {
  x = ofGetWidth() / 2;
  y = ofGetHeight() / 2;

  xdir = 1;
  ydir = 0;
  total = 1;
  tail = {};
}

void Snake::setGridSize(int gSize) { gridSize = gSize; }

void Snake::update() {
  int len = tail.size();

  if (total == len) {
    for (int i = 0; i < len - 1; i++) {
      tail[i] = tail[i + 1];
    }
  }

  tail.push_back(ofVec2f(x, y));

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
  for (auto i : tail) {
    ofDrawRectangle(i.x, i.y, gridSize, gridSize);
  }
}

bool Snake::eat(Food food) {
  if (sqrt(pow(x - food.x, 2) + pow(y - food.y, 2)) < 1) {
    total++;
    return true;
  } else {
    return false;
  }
}
