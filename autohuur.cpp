#include <iostream>
#include <string>
#include "autohuur.h"
using namespace std;

AutoHuur::AutoHuur(Auto& gehuurde_auto, Klant& huurder, int dagen):
gehuurde_auto(gehuurde_auto),
huurder(huurder),
aantal_dagen(dagen)
{}

void AutoHuur::set_aantal_dagen(int dagen) {
  this->aantal_dagen = dagen;
}

void AutoHuur::set_gehuurde_auto(Auto gehuurde_auto) {
  this->gehuurde_auto = gehuurde_auto;
}

void AutoHuur::set_huurder(Klant huurder) {
  this->huurder = huurder;
}

Auto AutoHuur::get_gehuurde_auto() {
  return this->gehuurde_auto;
}

Klant AutoHuur::get_huurder() {
  return this->huurder;
}

double AutoHuur::totaalprijs() {
  int discount = this->gehuurde_auto.get_prijs_per_dag() * this->aantal_dagen / 100 * this->huurder.get_korting();
  return this->gehuurde_auto.get_prijs_per_dag() * this->aantal_dagen - discount;
}
