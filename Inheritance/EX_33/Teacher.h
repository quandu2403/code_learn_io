#pragma once
#include "Person.h"

class Teacher : public Person {
private:
  int salary;

public:
  Teacher(std::string name, int age, std::string address, int salary);
  void setSalary(int salary);
  int getSalary();
  void display();
};