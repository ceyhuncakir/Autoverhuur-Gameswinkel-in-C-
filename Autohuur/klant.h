#ifndef KLANT_H
#define KLANT_H

#include <iostream>
#include <string>

using namespace std;

class Klant {

private:
  string naam;
  double korting_percentage;
public:
  Klant(string naam);
  void set_korting(double percentage);
  double get_korting();

  friend ostream& operator<<(std::ostream& out, const Klant& k);
};

#endif
