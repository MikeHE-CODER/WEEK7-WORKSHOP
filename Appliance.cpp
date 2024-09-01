#include "Appliance.h"
#include <iostream>
using namespace std;
Appliance::Appliance() : powerRating(0), isOn(false){};
Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false){};
bool Appliance::getison() { return isOn; };
int Appliance::getPowerRating() { return powerRating; };
void Appliance::setPowerRating(int powerRating) {
  this->powerRating = powerRating;
};
void Appliance::setisOn(bool ison) { this->isOn = ison; };
void Appliance::turnOn() { this->isOn = true; };
void Appliance::turnOff() { this->isOn = false; };
double Appliance::getPowerComsumption() { return 0; };
