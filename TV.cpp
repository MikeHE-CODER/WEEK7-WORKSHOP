#include "TV.h"
#include "Appliance.h"
#include <iostream>
using namespace std;
TV::TV(){};
TV::TV(int powerRating, double screenSize) {
  this->screenSize = screenSize;
  this->setPowerRating(powerRating);
}
void TV::setScreenSize(double screenSize) { this->screenSize = screenSize; };
double TV::getScreenSize() { return screenSize; };
double TV::getPowerConsumption() {
  return this->getPowerRating() * screenSize / 10;
};
