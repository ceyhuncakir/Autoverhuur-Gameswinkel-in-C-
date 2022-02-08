#ifndef AUTO_H
#define AUTO_H

#include <iostream>
#include <string>

class Auto {

private:
  string type;
  double prijs_per_dag;
public:
  Auto(string type, double prijs_per_dag);
  void set_prijs_per_dag(double prijs_per_dag);
  double get_prijs_per_dag();
  friend ostream& operator<<(std::ostream& out, const Auto& a);
};

#endif
