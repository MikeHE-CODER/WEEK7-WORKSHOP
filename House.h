#ifndef House_H
#define House_H
#include "Appliance.h"
#include <iostream>
using namespace std;
class House : public Appliance {
public:
  House();
  House(int numAppliances);
  bool addAppliance(Appliance *appliance);
  double getTotalPowerConsumption();

private:
  Appliance **appliances;
  int numAppliances;
  int number;
};
#endif
