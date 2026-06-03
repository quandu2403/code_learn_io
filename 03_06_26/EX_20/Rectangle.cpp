#include "Rectangle.h"

Rectangle::Rectangle() {};
Rectangle::Rectangle(double length, double width) {
  this->length = length;
  this->width = width;
}

void Rectangle::setLength(double length) { this->length = length; }

void Rectangle::setWidth(double width) { this->width = width; }

double Rectangle::getLength() { return length; }

double Rectangle::getWidth() { return width; }

double Rectangle::getArea() { return length * width; }

double Rectangle::getPerimeter() { return (length + width) * 2; }
