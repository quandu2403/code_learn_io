#include "Account.h"

Account::Account(int id, std::string name) {
  this->id = id;
  this->name = name;
  this->balance = 0;
}

Account::Account(int id, std::string name, int balance) {
  this->id = id;
  this->name = name;
  this->balance = balance;
}

int Account::getId() { return id; }

void Account::setName(std::string name) { this->name = name; }

std::string Account::getName() { return name; }

int Account::getBalance() { return balance; }

void Account::deposit(int amount) { balance += amount; }

void Account::withdraw(int amount) {
  if (balance < amount) {
    std::cout << "That amount exceeds your current balance." << std::endl;
  } else {
    balance -= amount;
  }
}

void Account::display() {
  std::cout << "Id: " << id << std::endl;
  std::cout << "Name: " << name << std::endl;
  std::cout << "Balance: " << balance << std::endl;
}
