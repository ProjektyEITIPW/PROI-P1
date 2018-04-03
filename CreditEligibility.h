#ifndef CREDITELIGIBILITY_H
#define CREDITELIGIBILITY_H

#include <algorithm>
#include <cmath>

using namespace std;

class CreditEligibility
{
  private:
    double monthlySetAside;
    int loanPeriod;
    bool isMortgageOrCarLoan;
    double savings;
    double commission;
    double maximumMonthlyExpense;

  public:
    void addToMonthlySetAside (double val)
    {
      monthlySetAside = monthlySetAside + val;
    };
    void subtractFromMonthlySetAside (double val)
    {
      monthlySetAside = monthlySetAside - val;
    };

    void setLoanPeriod (int val)
    {
      loanPeriod = val;
    };

    void setIsMortgageOrCarLoan (bool val)
    {
      isMortgageOrCarLoan=val;
    };

    void setSavings (double val)
    {
      savings=val;
    };

    void setCommission (double val)
    {
      commission=val;
    };

    void computeMaximumMonthlyExpense();
    double getMaximumMonthlyExpense ()
    {
      computeMaximumMonthlyExpense();
      return maximumMonthlyExpense;
    };

    double returnMaximumAmountToLoanWithDescendingInstallment();

    double returnMaximumAmountToLoanWithConstantInstallment();

};

#endif // CREDITELIGIBILITY_H
