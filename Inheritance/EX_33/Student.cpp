#include "Student.h"
#include "Person.h"

Student::Student(std::string name, int age, std::string address, double gpa)
    : Person(name, age, address) {
  this->gpa = gpa;
}

void Student::setGPa(double gpa) { this->gpa = gpa; }

double Student::getGpa() { return gpa; }

void Student::display() {
  Person::display();
  std::cout << "GPA: " << gpa << std::endl;
}