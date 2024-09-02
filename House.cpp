#include "TV.h"
#include "Appliance.h"
#include <iostream>
using namespace std;
TV::TV(){};
TV::TV(int powerRating, double screenSize) {
  this->screenSize = screenSize;
  this->set_PowerRating(powerRating);
}
void TV::setScreenSize(double screenSize) { this->screenSize = screenSize; };
double TV::getScreenSize() { return screenSize; };
double TV::getPowerConsumption() {
  return this->get_PowerRating() * screenSize / 10;
};
