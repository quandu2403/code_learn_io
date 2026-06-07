#include "Student.h"

Student::Student() {};
Student::Student(int id, std::string name, int age, std::string address,
                 int score) {
  this->id = id;
  this->name = name;
  this->age = age;
  this->address = address;
  setScore(score); // gọi setter để validate
}

void Student::setId(int id) { this->id = id; }
void Student::setName(std::string name) { this->name = name; }
void Student::setAge(int age) { this->age = age; }
void Student::setAddress(std::string address) { this->address = address; }
void Student::setScore(int score) {
  if (score < 0) {
    this->score = 0;
  } else if (score > 10) {
    this->score = 10;
  } else {
    this->score = score;
  }
}

int Student::getId() { return id; }
std::string Student::getName() { return name; }
int Student::getAge() { return age; }
std::string Student::getAddress() { return address; }
int Student::getScore() { return score; }