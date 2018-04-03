#include "LoanSimulatorInterface.h"

void LoanSimulatorInterface::LoanSimulatorInterfaceRun()
{
  double tmpD;
  int tmpI;
  vector <double> result;
  LoanSimulator ls;
  PrintAsCurrency p;
  Input in ( is, os );

  os << message[0];
  in.read( tmpD );
  ls.addLoanAmount( tmpD );

  os << message[1];
  in.read( tmpD );
  ls.addLoanAmount( tmpD );

  os << message[2];
  in.read( tmpD );
  ls.setCommission( tmpD );

  os << message[3];
  in.read( tmpI );
  ls.setPeriod( tmpI );

  os << message [4];
  in.read( tmpI );

  if ( tmpI == 0 )
    result = ls.returnPaymentPlanWithDescendingInstallments();

  if ( tmpI == 1 )
    result = ls.returnPaymentPlanWithConstantInstallments();

  os << message [5];

  int i = 1;
  for ( vector <double>::iterator it = result.begin(); it != result.end(); ++it, ++i)
    {
      p = result[i-1];
      os << endl << i << '\t' << p;
    }
}
