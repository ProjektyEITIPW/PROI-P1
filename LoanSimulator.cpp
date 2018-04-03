#include "LoanSimulator.h"

vector <double> LoanSimulator::returnPaymentPlanWithDescendingInstallments () const
{
  vector <double> ret;

  for (int i = 0; i < period; ++i)
  {
    ret.push_back( loanAmount / period * ( 1 + ( period - i) * commission / 12 ) );
  }

  return ret;
}

vector <double> LoanSimulator::returnPaymentPlanWithConstantInstallments () const
{
  double q = 1 + commission / 12;

  double base = loanAmount * pow( q, period ) * ( q - 1 ) / ( pow( q, period ) - 1 );

  vector <double> ret ( period, base );

  return ret;
}
