#pragma once
#include "Person.h"

class Employee : public Person {
private:
  int salary;

public:
  Employee(std::string name, std::string address, int salary);
  void display() override;
};