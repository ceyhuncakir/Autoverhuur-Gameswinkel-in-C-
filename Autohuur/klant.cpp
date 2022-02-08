#include <iostream>
#include <string>
#include "klant.h"
using namespace std;

Klant::Klant(string naam): naam(naam)
{}

void Klant::set_korting(double percentage) {
  this->korting_percentage = percentage;
}

double Klant::get_korting() {
  return this->korting_percentage;
}

ostream& operator<<(ostream& out, const Klant& k){

  return out << k.naam << " (korting: " << k.korting_percentage << "%)" << "\n";
}
