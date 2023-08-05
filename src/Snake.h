#include "ofMain.h"

class Snake {
 public:
  Snake();

  void setGridSize(int gSize);

  void changeDir();
  void update();
  void show();

  bool eat();
  bool isDead();

  int x;
  int y;
  int xdir;
  int ydir;
  int total;
  int gridSize;
  vector<ofPoint> tail;
};