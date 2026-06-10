#pragma once
#include "Person.h"

class Customer : public Person {
private:
  int balance;

public:
  Customer(std::string name, std::string address, int balance);
  void display() override;
};