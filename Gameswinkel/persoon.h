#ifndef PERSOON_H
#define PERSOON_H

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include "game.h"

class Persoon {

  private:
    string name;
    double money;
    vector<Game> boughtgames;
  public:
    Persoon(string name, double money);
    void getPerson(string name);
    void koop(Game game);
    void verkoop(Game game, Persoon persoon);
};

#endif
