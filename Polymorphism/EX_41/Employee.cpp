#include "Employee.h"
#include "Person.h"

Employee::Employee(std::string name, std::string address, int salary)
    : Person(name, address) {
  this->salary = salary;
}

void Employee::display() {
  std::cout << "Employee name: " << getName() << std::endl;
  std::cout << "Employee address: " << getAddress() << std::endl;
  std::cout << "Employee salary: " << salary << std::endl;
}