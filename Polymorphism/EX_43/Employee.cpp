#include "Employee.h"

Employee::Employee(std::string name, int paymentPerHour) {
  this->name = name;
  this->paymentPerHour = paymentPerHour;
}

void Employee::setName(std::string name) { this->name = name; }
std::string Employee::getName() { return name; }

void Employee::setPaymentPerHour(int paymentPerHour) {
  this->paymentPerHour = paymentPerHour;
}
int Employee::getPaymentPerHour() { return paymentPerHour; }