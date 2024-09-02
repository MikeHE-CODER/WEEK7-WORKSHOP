
#include "Appliance.h"
#include <iostream>
using namespace std;
int main() {
  Appliance a;
  Appliance b(5);
  a.get_ison();
  a.set_PowerRating(5);
  a.set_isOn(1);
  a.turnOn();
  a.turnOff();
  a.getPowerConsumption();
}
