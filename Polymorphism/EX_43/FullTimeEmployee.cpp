#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(std::string name, int paymentPerHour)
    : Employee(name, paymentPerHour) {};

int FullTimeEmployee::calculateSalary() { return 8 * getPaymentPerHour(); }
