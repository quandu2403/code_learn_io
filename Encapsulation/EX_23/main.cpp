#include "Student.h"
#include <iostream>

int main() {
  Student s(1001, "Trung", 24, "Ha Noi", 5);
  std::cout << s.getId() << std::endl;
  std::cout << s.getName() << std::endl;

  std::cout << s.getAge() << std::endl;

  std::cout << s.getAddress() << std::endl;

  std::cout << s.getScore() << std::endl;

  s.setScore(-7);
  std::cout << s.getScore() << std::endl;

  s.setScore(15);
  std::cout << s.getScore() << std::endl;

  return 0;
}