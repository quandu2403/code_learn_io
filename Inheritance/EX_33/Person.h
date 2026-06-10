#pragma once
#include <iostream>
#include <string>

class Person {
private:
  std::string name;
  int age;
  std::string address;

public:
  Person(std::string name, int age, std::string address);
  void setName(std::string name);
  std::string getName();

  void setAge(int age);
  int getAge();

  void setAddress(std::string address);
  std::string getAddress();

  void display();
};