#ifndef UNITTESTING_H
#define UNITTESTING_H

#include <vector>

#include "CreditEligibility.h"
#include "LoanSimulator.h"
#include "EarlierRepayment.h"

using namespace std;

class UnitTesting
{
  public:
    bool testCreditEligibility();
    bool testLoanSimulator();
    bool testEarlierRepayment();
};

#endif // UNITTESTING_H
