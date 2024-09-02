#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <iostream>
using namespace std;

House::House() : appliances(nullptr), numAppliances(0), number(0) {}

House::House(int numAppliances) : appliances(new Appliance *[numAppliances]), numAppliances(numAppliances), number(0) {}

bool House::addAppliance(Appliance *appliance) {
    if (number < numAppliances) {
        appliances[number] = appliance;
        number++;
        cout << appliance->get_powerRating() << " watts appliance added to the house" << endl;
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

House::~House() {
    delete[] appliances;
}

