#include <iostream>
#include "auto.h"
#include "klant.h"

#pragma once

using namespace std;

class AutoHuur {

private:
  int aantal_dagen;
  Auto gehuurde_auto;
  Klant huurder;
public:
  AutoHuur(Auto& gehuurde_auto, Klant& huurder, int dagen);
  void set_aantal_dagen(int dagen);
  void set_gehuurde_auto(Auto gehuurde_auto);
  void set_huurder(Klant huurder);
  Auto get_gehuurde_auto();
  Klant get_huurder();
  double totaalprijs();
};
