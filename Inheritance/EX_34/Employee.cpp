#include "Employee.h"

Employee::Employee(std::string name, int salary) {
  this->name = name;
  this->salary = salary;
}

void Employee::setName(std::string name) { this->name = name; }
std::string Employee::getName() { return name; }

void Employee::setSalary(int salary) { this->salary = salary; }
int Employee::getSalary() { return salary; }

void Employee::display() {
  std::cout << "Name: " << name << std::endl;
  std::cout << "Salary: " << salary << std::endl;
}