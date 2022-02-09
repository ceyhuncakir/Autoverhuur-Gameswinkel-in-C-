#ifndef KLANT_H
#define KLANT_H

#include <iostream>
#include <string>

class Klant {

private:
  std::string naam;
  double korting_percentage;
public:
  Klant(std::string naam);
  void set_korting(double percentage);
  double get_korting();

  friend std::ostream& operator<<(std::ostream& out, const Klant& k);
};

#endif
