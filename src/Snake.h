#pragma once

#include "Food.h"
#include "ofMain.h"

class Snake {
 public:
  Snake();

  void setGridSize(int gSize);

  void changeDir(int xd, int yd);
  void update();
  void show();

  bool eat(Food food);
  bool isDead();

  int x;
  int y;
  int xdir;
  int ydir;
  int total;
  int gridSize;
  vector<ofPoint> tail;
};