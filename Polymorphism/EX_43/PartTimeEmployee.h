#pragma once
#include "Employee.h"

class PartTimeEmployee : public Employee {
private:
  int workingHours;

public:
  PartTimeEmployee(std::string name, int paymentPerHour, int workingHours);
  int calculateSalary() override;
};