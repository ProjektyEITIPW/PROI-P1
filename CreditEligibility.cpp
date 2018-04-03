#include "CreditEligibility.h"

void CreditEligibility::computeMaximumMonthlyExpense()
{
  if ( isMortgageOrCarLoan == 1 )
    maximumMonthlyExpense = min( monthlySetAside, ( savings / 0.15 ) );

  else
    maximumMonthlyExpense = monthlySetAside;
}

double CreditEligibility::returnMaximumAmountToLoanWithDescendingInstallment()
{
  computeMaximumMonthlyExpense();

  return maximumMonthlyExpense * loanPeriod/(1+loanPeriod*commission/12);
}

double CreditEligibility::returnMaximumAmountToLoanWithConstantInstallment()
{
  computeMaximumMonthlyExpense();
  double q = 1 + commission / 12;

  return maximumMonthlyExpense * ( ( pow( q, loanPeriod ) - 1 ) / ( q - 1 ) ) / pow( q, loanPeriod );
}
