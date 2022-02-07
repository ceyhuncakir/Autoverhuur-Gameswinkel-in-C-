#include <iostream>
#include <string>

#pragma once

using namespace std;

class Auto {

private:
  string type;
  double prijs_per_dag;
public:
  Auto(string type, double prijs_per_dag);
  void set_prijs_per_dag(double prijs_per_dag);
  double get_prijs_per_dag();
};