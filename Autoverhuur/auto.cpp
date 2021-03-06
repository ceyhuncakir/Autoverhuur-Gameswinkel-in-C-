#include <iostream>
#include <string>
#include "auto.h"

Auto::Auto(std::string type, double prijs_per_dag):
  type(type),
  prijs_per_dag(prijs_per_dag)
{}

void Auto::set_prijs_per_dag(double percentage) {
  this->prijs_per_dag = percentage;
}

double Auto::get_prijs_per_dag() {
  return this->prijs_per_dag;
}

std::ostream& operator<<(std::ostream& out, const Auto& a){

  return out << a.type << " met prijs per dag: " << a.prijs_per_dag;
}
