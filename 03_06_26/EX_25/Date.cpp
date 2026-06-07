#include "Date.h"
#include <string>
Date::Date(int day, int month, int year) {
  this->day = day;
  this->month = month;
  this->year = year;
}

void Date::setDate(int day, int month, int year) {
  this->day = day;
  this->month = month;
  this->year = year;
}
void Date::setDay(int day) { this->day = day; }
void Date::setMonth(int month) { this->month = month; }
void Date::setYear(int year) { this->year = year; }

int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }

void Date::display() {
  std::string dayStr = std::to_string(day);
  if (day < 10) {
    dayStr = "0" + dayStr;
  }

  std::string monthStr = std::to_string(month);
  if (month < 10) {
    monthStr = "0" + monthStr;
  }

  std::cout << dayStr + "/" + monthStr + "/" + std::to_string(year)
            << std::endl;
}
