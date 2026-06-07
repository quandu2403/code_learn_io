#include "Employee.h"
#include <string>

Employee::Employee(int id, std::string firstName, std::string lastName,
                   int salary) {
  this->id = id;
  this->firstName = firstName;
  this->lastName = lastName;
  this->salary = salary;
}

void Employee::setId(int id) { this->id = id; }
void Employee::setFirstName(std::string firstName) {
  this->firstName = firstName;
}
void Employee::setLastName(std::string lastName) { this->lastName = lastName; }
void Employee::setSalary(int salary) { this->salary = salary; }

int Employee::getId() { return id; }
std::string Employee::getFirstName() { return firstName; }
std::string Employee::getLastName() { return lastName; }
std::string Employee::getFullName() { return firstName + " " + lastName; }
int Employee::getSalary() { return salary; }