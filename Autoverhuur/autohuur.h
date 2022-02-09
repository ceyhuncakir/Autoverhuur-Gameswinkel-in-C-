#ifndef AUTOHUUR_H
#define AUTOHUUR_H

#include <iostream>
#include "auto.h"
#include "klant.h"

class AutoHuur {

  private:
    int aantal_dagen;
    Auto gehuurde_auto;
    Klant huurder;
  public:
    friend std::ostream& operator<<(std::ostream& out, const AutoHuur& ah);

    AutoHuur(Auto& gehuurde_auto, Klant& huurder, int dagen);
    void set_aantal_dagen(int dagen);
    void set_gehuurde_auto(Auto gehuurde_auto);
    void set_huurder(Klant huurder);
    Auto get_gehuurde_auto() const;
    Klant get_huurder() const;
    double totaalprijs() const;

};

#endif
