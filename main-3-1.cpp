#include "Appliance.h"
#include "Fridge.h"
#include "House.h"
#include "TV.h"
#include <iostream>
using namespace std;
int main() {
  TV *a = new TV(100, 50);
  Fridge *b = new Fridge(100, 50);
  House c(3);
  c.addAppliance(a);
  c.addAppliance(b);
  c.getTotalPowerConsumption();
}
