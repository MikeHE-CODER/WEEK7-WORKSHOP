#include "Appliance.h"
#include <iostream>
using namespace std;
Appliance::Appliance() : powerRating(0), isOn(false){};
Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false){};
bool Appliance::get_ison() { return isOn; };
int Appliance::get_PowerRating() { return powerRating; };
void Appliance::set_PowerRating(int powerRating) {
  this->powerRating = powerRating;
};
void Appliance::set_isOn(bool ison) { this->isOn = ison; };
void Appliance::turnOn() { this->isOn = true; };
void Appliance::turnOff() { this->isOn = false; };
double Appliance::getPowerConsumption() { return 0; };
