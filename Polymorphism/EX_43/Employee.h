#pragma once
#include <iostream>

class Employee {
private:
  std::string name;
  int paymentPerHour;

public:
  Employee(std::string name, int paymentPerHour);

  void setName(std::string name);
  std::string getName();

  void setPaymentPerHour(int paymentPerHour);
  int getPaymentPerHour();

  virtual int calculateSalary() = 0;
};