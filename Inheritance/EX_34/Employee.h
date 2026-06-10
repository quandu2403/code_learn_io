#pragma once
#include <iostream>
class Employee {
private:
  std::string name;
  int salary;

public:
  Employee(std::string name, int salary);

  void setName(std::string name);
  std::string getName();

  void setSalary(int salary);
  int getSalary();

  void display();
};