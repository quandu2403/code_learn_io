#include "Employee.h"

int main() {
  Employee e(1, "Kien", "Hoang", 1000);
  std::cout << "Id: " << e.getId() << std::endl;
  std::cout << "Name: " << e.getFullName() << std::endl;
  std::cout << "Salary: " << e.getSalary() << std::endl;
  return 0;
}