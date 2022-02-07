#include <iostream>
#include <string>

#pragma once

using namespace std;

class Klant {

private:
  string naam;
  double korting_percentage;
public:
  Klant(string naam);
  void set_korting(double percentage);
  double get_korting();
};
