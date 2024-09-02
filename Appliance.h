#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <iostream>
using namespace std;
class Appliance {
public:
  Appliance();
  Appliance(int powerRating);
  void turnOn();
  void turnOff();
  bool get_isOn();
  int get_powerRating();
  void set_powerRating(int powerRating);
  void set_isOn(bool ison);
  virtual double getPowerConsumption();

private:
  int powerRating;
  bool isOn;
};

#endif
