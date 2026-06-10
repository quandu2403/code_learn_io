#include "Teacher.h"
#include "Person.h"

Teacher::Teacher(std::string name, int age, std::string address, int salary)
    : Person(name, age, address) {
  this->salary = salary;
}

void Teacher::setSalary(int salary) { this->salary = salary; }
int Teacher::getSalary() { return salary; }

void Teacher::display() {
  Person::display();
  std::cout << "Salary: " << salary << std::endl;
}