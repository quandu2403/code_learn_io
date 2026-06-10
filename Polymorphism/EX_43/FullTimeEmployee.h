#pragma once
#include "Employee.h"

class FullTimeEmployee : public Employee {
public:
  FullTimeEmployee(std::string name, int paymentPerHour);
  int calculateSalary() override;
};