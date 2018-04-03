#ifndef UNITTESTINGINTERFACE_H
#define UNITTESTINGINTERFACE_H

#include <iostream>
#include <vector>
#include <string>

#include "UnitTesting.h"

using namespace std;

class UnitTestingInterface
{
  private:
    istream& is;
    ostream& os;
    vector <string> message =
    {
      "\nA: Test CreditEligibility\nB: Test LoanSimulator\nC: Test EarlierRepayment\n",
      "\nTest zakonczony powodzeniem",
      "\nTest zakonczyl sie niepomyslnie"
    };
    void UnitTestingInterfaceRun();

  public:
    UnitTestingInterface(istream& in, ostream& out)
      : is( in ),
        os( out )
    {
      UnitTestingInterfaceRun();
    };

};

#endif // UNITTESTINGINTERFACE_H
