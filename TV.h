#ifndef TV_H
#define TV_H
#include "Appliance.h"
#include <iostream>
using namespace std;
class TV : public Appliance {
public:
  TV();
  TV(int powerRating, double screenSize);
  void setScreenSize(double screenSize);
  double getScreenSize();
  double getPowerConsumption() override;
private:
  double screenSize;
};
#endif
