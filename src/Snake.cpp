#include "Snake.h"

Snake::Snake() {
  x = ofGetWidth() / 2;
  y = ofGetHeight() / 2;

  xdir = 1;
  ydir = 0;
  // initialize the body with the first position
  body.push_back(ofVec2f(x, y));
}

void Snake::setGridSize(int gSize) { gridSize = gSize; }

void Snake::update() {
  int len = body.size();

  // update the head of the body with its latest position
  body[len - 1] = ofVec2f(x, y);

  // update positions of all cells of the snake
  for (int i = 0; i < len - 1; i++) {
    body[i] = body[i + 1];
  }

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
  for (auto i : body) {
    ofDrawRectangle(i.x, i.y, gridSize, gridSize);
  }
}

bool Snake::eat(Food food) {
  if (sqrt(pow(x - food.x, 2) + pow(y - food.y, 2)) < 1) {
    body.push_back(ofVec2f(x, y));
    return true;
  } else {
    return false;
  }
}
