#include "Employee.h"
#include "Manager.h"

int main() {
  Employee a("Khanh", 1500);
  Manager b("Trinh", 1500, 300);
  a.display();
  b.display();
  return 0;
}