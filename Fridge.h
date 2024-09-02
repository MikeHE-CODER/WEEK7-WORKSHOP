#ifndef Fridge_H
#define Fridge_H
#include "Appliance.h"
#include <iostream>
using namespace std;
class Fridge : public Appliance {
public:
  Fridge();
  Fridge(int powerRating, double volume);
  void setVolume(double volume);
  double getVolume();
  double getPowerConsumption() override;

private:
  double volume;
};
#endif
