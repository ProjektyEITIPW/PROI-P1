#include "LoanSimulatorInterface.h"

void LoanSimulatorInterface::LoanSimulatorInterfaceRun()
{
  double tmpD;
  int tmpI;
  vector <double> result;
  LoanSimulator ls;
  PrintAsCurrency p ( os );

  os << message[0];
  is >> tmpD;
  ls.addLoanAmount( tmpD );

  os << message[1];
  is >> tmpD;
  ls.addLoanAmount( tmpD );

  os << message[2];
  is >> tmpD;
  ls.setCommission( tmpD );

  os << message[3];
  is >> tmpI;
  ls.setPeriod( tmpI );

  os << message [4];
  is >> tmpI;

  if ( tmpI == 0 )
    result = ls.returnPaymentPlanWithDescendingInstallments();

  if ( tmpI == 1 )
    result = ls.returnPaymentPlanWithConstantInstallments();

  os << message [5];

  int i = 1;
  for ( vector <double>::iterator it = result.begin(); it != result.end(); ++it, ++i)
    {
      os << endl << i << '\t';
      p.print( result[i-1] );
    }
}
