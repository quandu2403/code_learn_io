#include "Manager.h"
#include "Employee.h"

Manager::Manager(std::string name, int salary, int bounus)
    : Employee(name, salary) {
  this->bonus = bounus;
}

void Manager::setBonus(int bonus) { this->bonus = bonus; }
int Manager::getBonus() { return bonus; }

int Manager::getSalary() { return Employee::getSalary() + bonus; }

void Manager::display() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Salary: " << getSalary() << std::endl;
}