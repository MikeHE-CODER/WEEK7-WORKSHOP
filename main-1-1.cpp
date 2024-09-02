#include "Appliance.h"
#include <iostream>
using namespace std;
int main() {
  Appliance a;
  Appliance b(5);
  a.getison();
  a.setPowerRating(5);
  a.setisOn(1);
  a.turnOn();
  a.turnOff();
  a.getPowerConsumption();
}
