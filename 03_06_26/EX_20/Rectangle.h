#pragma once

class Rectangle {
private:
  double length;
  double width;

public:
  Rectangle();
  Rectangle(double length, double width);
  void setLength(double length);
  double getLength();
  void setWidth(double width);
  double getWidth();
  double getArea();
  double getPerimeter();
};