#include "Rectangle.h"
#include <iostream>

int main() {
  Rectangle r(4, 5);
  std::cout << "Area: " << r.getArea() << std::endl;
  std::cout << "PerimeterL " << r.getPerimeter() << std::endl;
  r.setLength(2);
  r.setWidth(3);
  std::cout << "Area: " << r.getArea() << std::endl;
  std::cout << "Perimeter: " << r.getPerimeter() << std::endl;

  return 0;
}
