#include <iostream>
#include <string>
#include "auto.h"
using namespace std;

Auto::Auto(string type, double prijs_per_dag):
  type(type),
  prijs_per_dag(prijs_per_dag)
{}

void Auto::set_prijs_per_dag(double percentage) {
  this->prijs_per_dag = percentage;
}

double Auto::get_prijs_per_dag() {
  return this->prijs_per_dag;
}
