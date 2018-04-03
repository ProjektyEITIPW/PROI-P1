#include "EarlierRepayment.h"

double EarlierRepayment::baseToRepay() const
{
  return baseCredit-baseCreditRepaid;
}

double EarlierRepayment::chargesToBeReturned() const
{
  double state = currentMonth / period;
  return initialCharges * ( 1 - state ) + recurringChargesRepaid - recurringCharges * state;
}
