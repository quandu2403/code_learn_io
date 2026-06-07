#include <iostream>

class Point {
private:
  double x;
  double y;

public:
  Point();
  Point(double x, double y);
  void setX(double x);
  void setY(double y);
  void setXY(double x, double y);

  double getX();
  double getY();

  double distance(double x, double y);
  double distance(Point another);
};