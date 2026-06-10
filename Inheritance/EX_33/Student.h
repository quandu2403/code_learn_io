#pragma once
#include "Person.h"

class Student : public Person {
private:
  double gpa;

public:
  Student(std::string name, int age, std::string address, double gpa);
  void setGPa(double gpa);
  double getGpa();
  void display();
};