#include "Point.h"
#include <math.h>
Point::Point() {};
Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
};

void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }
void Point::setXY(double x, double y) {
  this->x = x;
  this->y = y;
}

double Point::getX() { return x; }
double Point::getY() { return y; }

double Point::distance(double x, double y) {
  return sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
}

double Point::distance(Point another) {
  return sqrt(pow(this->x - another.getX(), 2) +
              pow(this->y - another.getY(), 2));
}