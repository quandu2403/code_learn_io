#include "Student.h"
#include "Teacher.h"

int main() {
  Student s("Nam", 23, "123", 5.7);
  s.display();

  Teacher t("Ba", 42, "2324", 1200);
  t.display();

  return 0;
}