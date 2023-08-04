#pragma once
#include "ofMain.h"

class Drop {
 public:
  Drop();
  void fall();
  void show();

  float x, y, yspeed, len, gravity;
};
