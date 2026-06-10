#include "Person.h"

Person::Person(std::string name, int age, std::string address) {
  this->name = name;
  this->age = age;
  this->address = address;
}

void Person::setName(std::string name) { this->name = name; }
std::string Person::getName() { return name; };

void Person::setAge(int age) { this->age = age; }
int Person::getAge() { return age; }

void Person::setAddress(std::string address) { this->address = address; }
std::string Person::getAddress() { return address; }

void Person::display() {
  std::cout << "Name: " << name << std::endl;
  std::cout << "Age: " << age << std::endl;
  std::cout << "Address: " << address << std::endl;
}