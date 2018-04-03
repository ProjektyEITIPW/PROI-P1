#include "CreditEligibilityInterface.h"

void CreditEligibilityInterface::creditEligibilityInterfaceRun ()
{
  double tmpD;
  int tmpI;
  bool tmpB;
  CreditEligibility ce;
  PrintAsCurrency p;
  Input in ( is, os );

  os << message[0];
  in.read( tmpD );
  ce.addToMonthlySetAside ( tmpD );

  os << message[1];
  in.read( tmpD );
  ce.subtractFromMonthlySetAside ( tmpD );

  os << message[2];
  in.read( tmpI );
  ce.setLoanPeriod ( tmpI );

  os << message[3];
  in.read( tmpB );
  ce.setIsMortgageOrCarLoan ( tmpB );

  if( tmpB )
  {
  os << message[4];
  in.read( tmpD );
  ce.setSavings ( tmpD );
  }

  os << message[5];
  in.read( tmpD );
  ce.setCommission ( tmpD );

  p = ce.getMaximumMonthlyExpense();
  os << message[6] << p;
  p = ce.returnMaximumAmountToLoanWithDescendingInstallment();
  os << message[7] << p;
  p = ce.returnMaximumAmountToLoanWithConstantInstallment();
  os << message[8] << p;
}
