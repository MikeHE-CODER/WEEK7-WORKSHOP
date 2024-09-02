#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <iostream>
using namespace std;
int main() {
  TV(a);
  TV b(5, 6);
  a.get_isOn();
  a.set_powerRating(5);
  a.set_isOn(1);
  a.turnOn();
  a.turnOff();
  a.getPowerConsumption();
  b.setScreenSize(10);
  b.getPowerConsumption();
  b.getScreenSize();
}
