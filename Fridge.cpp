#include "Fridge.h"
#include "Appliance.h"
#include <iostream>
using namespace std;
Fridge::Fridge(){};
Fridge::Fridge(int powerRating, double volume) {
  this->volume = volume;
  this->set_PowerRating(powerRating);
}
void Fridge::setVolume(double volume) { this->volume = volume; };
double Fridge::getVolume() { return volume; };
double Fridge::getPowerConsumption() {
  return this->get_PowerRating() * 24 * volume / 100;
};
