#include <iostream>
#include <string>
#include "autohuur.h"

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

Auto AutoHuur::get_gehuurde_auto() const {
  return this->gehuurde_auto;
}

Klant AutoHuur::get_huurder() const {
  return this->huurder;
}

double AutoHuur::totaalprijs() const {
  int discount = this->get_gehuurde_auto().get_prijs_per_dag() * this->aantal_dagen / 100 * this->get_huurder().get_korting();
  return this->get_gehuurde_auto().get_prijs_per_dag() * this->aantal_dagen - discount;
}

std::ostream& operator<<(std::ostream& out, const AutoHuur& ah) {

  return out << "\n  autotype: " << ah.get_gehuurde_auto() << "\n  op naam van: " << ah.get_huurder() << "  aantal dagen: " << ah.aantal_dagen << " en dat kost " << ah.totaalprijs();
}
