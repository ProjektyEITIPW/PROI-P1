#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "CreditEligibilityInterface.h"
#include "LoanSimulatorInterface.h"
#include "EarlierRepaymentInterface.h"
#include "UnitTestingInterface.h"

using namespace std;

class MainInterface
{
  private:
    istream& is;
    ostream& os;
    vector <string> message =
    {
      "\nWybierz jedna z dostepnych opcji:\n\tA: Obliczanie zdolnosci kredytowej\n\tB: Symulacja kredytu\n\tC: Wczesniejsza splata kredytu\n\tX: Zakonczenie pracy z programem\n\tT: Testy jednostkowe\n",
      "Dziekuje za prace z programem."
    };

  public:
    MainInterface( istream& in, ostream& out )
      : is( in ),
        os( out )
    {};

    bool mainInterfaceRun ();
};
#endif // MAININTERFACE_H
