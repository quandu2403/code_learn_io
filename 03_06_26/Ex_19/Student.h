#pragma once
#include <iostream>
#include <string>

class Student {
private:
  std::string name = "Unknown";
  char gender = 'u';

public:
  Student();
  Student(std::string name);
  Student(char gender);
  Student(std::string name, char gender);
  void display();
};