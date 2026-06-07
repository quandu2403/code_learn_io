#pragma once
#include <iostream>

class Account {
private:
  int id;
  std::string name;
  int balance;

public:
  Account(int id, std::string name);
  Account(int id, std::string name, int balance);
  int getId();

  void setName(std::string name);
  std::string getName();
  int getBalance();
  void deposit(int amount);
  void withdraw(int amount);
  void display();
};