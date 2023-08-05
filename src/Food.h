#include "ofMain.h"

class Food {
 public:
  Food();

  void setGridSize(int gSize);
  void pickLocation();
  void show();

  int x;
  int y;
  int gridSize;
};