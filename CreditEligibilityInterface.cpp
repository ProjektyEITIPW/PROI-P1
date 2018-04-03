#include "CreditEligibilityInterface.h"

void CreditEligibilityInterface::creditEligibilityInterfaceRun ()
{
  double tmpD;
  int tmpI;
  bool tmpB;
  CreditEligibility ce;
  PrintAsCurrency p ( os );

  os << message[0];
  is >> tmpD;
  ce.addToMonthlySetAside ( tmpD );

  os << message[1];
  is >> tmpD;
  ce.subtractFromMonthlySetAside ( tmpD );

  os << message[2];
  is >> tmpI;
  ce.setLoanPeriod ( tmpI );

  os << message[3];
  is >> tmpB;
  ce.setIsMortgageOrCarLoan ( tmpB );

  if( tmpB )
  {
  os << message[4];
  is >> tmpD;
  ce.setSavings ( tmpD );
  }

  os << message[5];
  is >> tmpD;
  ce.setCommission ( tmpD );

  os << message[6];
  p.print(ce.getMaximumMonthlyExpense());
  os << message[7];
  p.print(ce.returnMaximumAmountToLoanWithDescendingInstallment());
  os << message[8];
  p.print(ce.returnMaximumAmountToLoanWithConstantInstallment());

}
