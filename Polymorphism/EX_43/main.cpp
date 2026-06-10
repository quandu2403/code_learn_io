#include "Employee.h"
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
#include <iostream>
int main() {
  Employee *employee1 = new PartTimeEmployee("Trung", 45000, 7);
  std::cout << "Name: " << employee1->getName() << std::endl;
  std::cout << "Salary per day: " << employee1->calculateSalary() << std::endl;

  Employee *employee2 = new FullTimeEmployee("Linh", 65000);
  std::cout << "Name: " << employee2->getName() << std::endl;
  std::cout << "Salary per day: " << employee2->calculateSalary() << std::endl;
  return 0;
}