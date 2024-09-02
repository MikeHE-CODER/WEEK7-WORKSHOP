#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <iostream>
using namespace std;
House::House() : Appliance(), appliances(nullptr) {}
House::House(int numAppliances) : appliances(new Appliance *[numAppliances]) {}
bool House::addAppliance(Appliance *appliance) {
  if (number < numAppliances) {
    appliances[number] = appliance;
    number++;
    return true;
  }
  return false;
}
double House::getTotalPowerConsumption() {
  double totalPowerConsumption = 0;
  for (int i = 0; i < number; i++) {
    totalPowerConsumption += appliances[i]->getPowerConsumption();
  }
  return totalPowerConsumption;
}
