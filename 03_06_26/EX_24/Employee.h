#pragma once
#include <iostream>
class Employee {
private:
  int id;
  std::string firstName;
  std::string lastName;
  int salary;

public:
  Employee(int id, std::string firstName, std::string lastName, int salary);
  void setId(int id);
  void setFirstName(std::string firstName);
  void setLastName(std::string lastName);
  void setSalary(int salary);
  int getId();
  std::string getFirstName();
  std::string getLastName();
  int getSalary();
  std::string getFullName();
};