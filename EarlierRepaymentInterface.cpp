#include "EarlierRepaymentInterface.h"

void EarlierRepaymentInterface::EarlierRepaymentInterfaceRun()
{
  double tmpD;
  int tmpI;
  EarlierRepayment er;
  PrintAsCurrency p ( os );

  os << message[0];
  is >> tmpD;
  er.setBaseCredit( tmpD );

  os << message[1];
  is >> tmpD;
  er.setBaseCreditRepaid( tmpD );

  os << message[2];
  is >> tmpD;
  er.setRecurringCharges( tmpD );

  os << message[3];
  is >> tmpD;
  er.setRecurringChargesRepaid( tmpD );

  os << message[4];
  is >> tmpD;
  er.setInitialCharges( tmpD );

  os << message[5];
  is >> tmpI;
  er.setPeriod( tmpI );

  os << message[6];
  is >> tmpI;
  er.setCurrentMonth( tmpI );

  os << message[7];
  p.print( er.baseToRepay() );
  os << message[8];
  p.print( er.chargesToBeReturned() );
  os << message[9];
  p.print( er.baseToRepay() - er.chargesToBeReturned() );
}
