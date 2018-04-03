#include "EarlierRepaymentInterface.h"

void EarlierRepaymentInterface::EarlierRepaymentInterfaceRun()
{
  double tmpD;
  int tmpI;
  EarlierRepayment er;
  PrintAsCurrency p;
  Input in ( is, os );

  os << message[0];
  in.read( tmpD );
  er.setBaseCredit( tmpD );

  os << message[1];
  in.read( tmpD );
  er.setBaseCreditRepaid( tmpD );

  os << message[2];
  in.read( tmpD );
  er.setRecurringCharges( tmpD );

  os << message[3];
  in.read( tmpD );
  er.setRecurringChargesRepaid( tmpD );

  os << message[4];
  in.read( tmpD );
  er.setInitialCharges( tmpD );

  os << message[5];
  in.read( tmpI );
  er.setPeriod( tmpI );

  os << message[6];
  in.read( tmpI );
  er.setCurrentMonth( tmpI );

  p = er.baseToRepay();
  os << message[7] << p;
  p = er.chargesToBeReturned();
  os << message[8] << p;
  p = er.baseToRepay() - er.chargesToBeReturned();
  os << message[9] << p;
}
