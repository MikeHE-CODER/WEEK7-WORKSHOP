#include "Appliance.h"
#include "Fridge.h"
#include <iostream>
using namespace std;
int main() {
  Fridge a;
  Fridge b(5, 6);
  a.getison();
  a.setPowerRating(5);
  a.setisOn(1);
  a.turnOn();
  a.turnOff();
  a.getPowerConsumption();
  b.setVolume(10);
  b.getPowerConsumption();
  b.getVolume();
}
