#include "Time.h"
#include <string>

Time::Time(int hour, int minute, int second) {
  this->hour = hour;
  this->minute = minute;
  this->second = second;
}

void Time::setTime(int hour, int minute, int second) {
  this->hour = hour;
  this->minute = minute;
  this->second = second;
}
void Time::setHour(int hour) { this->hour = hour; }
void Time::setMinute(int minute) { this->minute = minute; }
void Time::setSecond(int second) { this->second = second; }

int Time::getHour() { return hour; }
int Time::getSecond() { return second; }
int Time::getMinute() { return minute; }

void Time::nextSecond() {
  if (second == 59) {
    minute += 1;
    second = 0;
    if (minute == 60) {
      if (hour == 23) {
        hour = 0;
      } else {
        hour += 1;
      }
      minute = 0;
    }
  } else {
    second += 1;
  }
}

void Time::previousSecond() {
  if (second == 0) {
    second = 59;
    if (minute == 0) {
      if (hour == 0) {
        hour = 23;
      } else {
        hour -= 1;
      }
      minute = 59;
    } else {
      minute -= 1;
    }
  } else {
    second -= 1;
  }
}

void Time::display() {
  std::string hourStr = std::to_string(hour);
  std::string minuteSTr = std::to_string(minute);
  std::string secondStr = std::to_string(second);
  if (hour < 10) {
    hourStr = "0" + hourStr;
  }

  if (minute < 10) {
    minuteSTr = "0" + minuteSTr;
  }

  if (second < 10) {
    secondStr = "0" + secondStr;
  }

  std::cout << hourStr << ":" << minuteSTr << ":" << secondStr << std::endl;
}