#ifndef CREDITELIGIBILITYINTERFACE_H
#define CREDITELIGIBILITYINTERFACE_H

#include <iostream>
#include <vector>
#include <string>

#include "CreditEligibility.h"
#include "PrintAsCurrency.h"

using namespace std;

class CreditEligibilityInterface
{
  private:
    istream& is;
    ostream& os;
    vector <string> message =
    {
      "\nMiesieczny dochod gospodarstwa domowego netto: ",
      "\nWydatki comiesieczne, w tym raty innych kredytow: ",
      "\nWprowadz okres kredytowania w miesiacach: ",
      "\nCzy wnioskowany kredyt jest samochodowym lub hipotecznym?\n(Wymagane zabezpieczenie 15% zadanej kwoty.) Wpisz 0 (Nie) lub 1 (Tak): ",
      "\nWprowadz posiadane oszczednosci: ",
      "\nWprowadz laczna wysokosc oprocentowania i prowizji w ulamku dziesietnym: ",
      "\nMaksymalna kwota raty kredytu wynosi ",
      "\nMaksymalna kwota kredytu z oplatami w wariancie:\n- raty malejacej wynosi ",
      "\n- raty stalej wynosi "
    };
    void creditEligibilityInterfaceRun ();

  public:
    CreditEligibilityInterface ( istream& in, ostream& out )
      : is( in ),
        os( out )
    {creditEligibilityInterfaceRun();};
};

#endif // CREDITELIGIBILITYINTERFACE_H
