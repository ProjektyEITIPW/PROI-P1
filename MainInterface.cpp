#include "MainInterface.h"

bool MainInterface::mainInterfaceRun ()
{
  os << message[0];

  char c;
  is >> c;

  if ( c == 'X' || c == 'x' )
  {
    os << message[1];
    return 1;
  }

  if ( c == 'A' || c == 'a' )
  {
    CreditEligibilityInterface ce ( is, os );
    return 0;
  }

  if ( c == 'B' || c == 'b' )
  {
    LoanSimulatorInterface ( is, os );
    return 0;
  }

  if ( c == 'C' || c == 'c' )
  {
    EarlierRepaymentInterface ( is, os );
    return 0;
  }

  if ( c == 'T' || c == 't' )
  {
    UnitTestingInterface ( is, os );
    return 0;
  }

  return 0;
}
