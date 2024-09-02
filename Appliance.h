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
  bool get_ison();
  int get_PowerRating();
  void set_PowerRating(int powerRating);
  void set_isOn(bool ison);
  virtual double getPowerConsumption();

private:
  int powerRating;
  bool isOn;
};

#endif
