
#include "Appliance.h"
#include <iostream>
using namespace std;
int main() {
  Appliance a;
  Appliance b(5);
  a.get_isOn();
  a.set_powerRating(5);
  a.get_powerRating();
  a.set_isOn(1);
  a.turnOn();
  a.turnOff();
  a.getPowerConsumption();
}
