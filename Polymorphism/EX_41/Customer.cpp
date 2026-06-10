#include "Customer.h"

Customer::Customer(std::string name, std::string address, int balance)
    : Person(name, address) {
  this->balance = balance;
}

void Customer::display() {
  std::cout << "Customer name: " << getName() << std::endl;
  std::cout << "Customer address: " << getAddress() << std::endl;
  std::cout << "Customer balance: " << balance << std::endl;
}