#include <iostream>

class Time {
private:
  int hour;
  int minute;
  int second;

public:
  Time(int hour, int minute, int second);
  void setTime(int hour, int minute, int second);
  void setHour(int hour);
  void setMinute(int minute);
  void setSecond(int second);

  int getHour();
  int getMinute();
  int getSecond();

  void nextSecond();
  void previousSecond();
  void display();
};