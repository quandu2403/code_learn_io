#include "Student.h"

Student::Student() {}

Student::Student(std::string name) : name(name) {}
Student::Student(char gender) : gender(gender) {}
Student::Student(std::string name, char gender) : name(name), gender(gender) {}

void Student::display() {
  std::cout << "Name: " << name << std::endl;
  if (gender == 'f') {
    std::cout << "Gender: Female" << std::endl;
  } else if (gender == 'm') {
    std::cout << "Gender: Male" << std::endl;
  } else {
    std::cout << "Gender: Unknown" << std::endl;
  }
}