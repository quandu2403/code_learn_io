#pragma once
#include <iostream>
class Student {
private:
  int id;
  std::string name;
  int age;
  std::string address;
  int score;

public:
  Student();
  Student(int id, std::string name, int age, std::string address, int score);
  void setId(int ID);
  void setName(std::string name);
  void setAge(int age);
  void setAddress(std::string address);
  void setScore(int score);

  int getId();
  std::string getName();
  int getAge();
  std::string getAddress();
  int getScore();
};