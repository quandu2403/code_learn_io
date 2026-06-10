#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(std::string name, int paymentPerHour,
                                   int workingHours)
    : Employee(name, paymentPerHour) {
  this->workingHours = workingHours;
}

int PartTimeEmployee::calculateSalary() {
  return workingHours * getPaymentPerHour();
}
