#include "UnitTestingInterface.h"

void UnitTestingInterface::UnitTestingInterfaceRun()
{
  os << message[0];

  char c;
  is >> c;

  UnitTesting ut;

  if ( c == 'A' || c == 'a' )
  {
    if( ut.testCreditEligibility() )
      os << message[2];
    else
      os << message[1];
  }

  if ( c == 'B' || c == 'b' )
  {
    if( ut.testLoanSimulator() )
      os << message[2];
    else
      os << message[1];
  }

  if ( c == 'C' || c == 'c' )
  {
    if( ut.testEarlierRepayment() )
      os << message[2];
    else
      os << message[1];
  }
}
