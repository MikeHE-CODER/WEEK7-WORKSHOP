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
  double getPowerConsumption();
  bool getison();
  int getPowerRating();
  void setPowerRating(int powerRating);
  void setisOn(bool ison);
  virtual double getPowerComsumption();

private:
  int powerRating;
  bool isOn;
};

#endif
