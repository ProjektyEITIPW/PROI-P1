#ifndef LOANSIMULATOR_H
#define LOANSIMULATOR_H

#include <vector>
#include <cmath>

using namespace std;

class LoanSimulator
{
  private:
    double loanAmount;
    double commission;
    int period;

  public:
    void addLoanAmount( double val )
    {
      loanAmount = loanAmount + val;
    }

    void setCommission( double val )
    {
      commission = val;
    }

    void setPeriod( int val )
    {
      period = val;
    };

    vector <double> returnPaymentPlanWithDescendingInstallments() const;

    vector <double> returnPaymentPlanWithConstantInstallments() const;
};

#endif // LOANSIMULATOR_H
