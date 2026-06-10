#include "Person.h"

Person::Person(std::string name, std::string address) {
  this->name = name;
  this->address = address;
}

void Person::setName(std::string name) { this->name = name; }
std::string Person::getName() { return name; }

void Person::setAddress(std::string address) { this->address = address; }
std::string Person::getAddress() { return address; }
