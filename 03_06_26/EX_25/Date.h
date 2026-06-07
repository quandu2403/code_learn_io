#include <iostream>

class Date {
private:
  int day;
  int month;
  int year;

public:
  Date(int day, int month, int year);
  void setDate(int day, int month, int year);
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);

  int getDay();
  int getMonth();
  int getYear();

  void display();
};