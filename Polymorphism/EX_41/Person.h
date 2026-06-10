#pragma once
#include <iostream>

class Person {
private:
  std::string name;
  std::string address;

public:
  Person(std::string name, std::string address);
  void setName(std::string name);
  std::string getName();

  void setAddress(std::string address);
  std::string getAddress();

  virtual void display() = 0;
};