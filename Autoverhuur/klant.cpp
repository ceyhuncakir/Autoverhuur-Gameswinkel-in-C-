#include <iostream>
#include <string>
#include "klant.h"

Klant::Klant(std::string naam): naam(naam)
{}

void Klant::set_korting(double percentage) {
  this->korting_percentage = percentage;
}

double Klant::get_korting() {
  return this->korting_percentage;
}

std::ostream& operator<<(std::ostream& out, const Klant& k){

  return out << k.naam << " (korting: " << k.korting_percentage << "%)" << "\n";
}
