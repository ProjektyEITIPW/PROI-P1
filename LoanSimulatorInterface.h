#ifndef LOANSIMULATORINTERFACE_H
#define LOANSIMULATORINTERFACE_H

#include <iostream>
#include <vector>
#include <string>

#include "LoanSimulator.h"
#include "PrintAsCurrency.h"

class LoanSimulatorInterface
{
  private:
    istream& is;
    ostream& os;
    vector <string> message =
    {
      "\nWprowadz wnioskowana kwote kredytu: ",
      "\nWprowadz poczatkowe koszty pozyczki: ",
      "\nWprowadz oprocentowanie: ",
      "\nWprowadz okres kredytowania w miesiacach: ",
      "\nWprowadz 0 dla kredytu o racie malejacej lub 1 dla kredytu o racie stalej: ",
      "L.p.\tKwota raty"
    };
    void LoanSimulatorInterfaceRun();

  public:
    LoanSimulatorInterface( istream& in, ostream& out )
      : is( in ),
        os( out )
    {
      LoanSimulatorInterfaceRun();
    };


};

#endif // LOANSIMULATORINTERFACE_H
