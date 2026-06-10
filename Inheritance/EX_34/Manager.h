#pragma once
#include "Employee.h"

class Manager : public Employee {
private:
  int bonus;

public:
  Manager(std::string name, int salary, int bonus);

  void setBonus(int bonus);
  int getBonus();

  int getSalary();

  void display();
};