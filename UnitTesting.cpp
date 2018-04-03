#include "UnitTesting.h"

bool UnitTesting::testCreditEligibility()
{
  CreditEligibility ce;
  ce.addToMonthlySetAside ( 2354.89 );
  ce.subtractFromMonthlySetAside ( 629.47 );
  ce.setLoanPeriod ( 200 );
  ce.setIsMortgageOrCarLoan ( 1 );
  ce.setSavings ( 1200 );
  ce.setCommission ( 0.1 );
  if( ! ( static_cast <int> ( ce.returnMaximumAmountToLoanWithDescendingInstallment() * 100 ) == 12940649 ) ) return 1;
  if( ! ( static_cast <int> ( ce.returnMaximumAmountToLoanWithConstantInstallment() * 100 ) == 16767262)) return 1;
  return 0;
}

bool UnitTesting::testLoanSimulator()
{
  vector <double> tmpD;
  vector <int> tmpI;

  vector <int> expectedResult = {79166293, 78742071, 78954755, 78954755};

  LoanSimulator ls;

  ls.addLoanAmount( 1566357 );
  ls.setCommission( 0.065 );
  ls.setPeriod( 2 );

  tmpD = ls.returnPaymentPlanWithDescendingInstallments();
  tmpI.push_back( static_cast <int> ( tmpD[0] * 100 ) );
  tmpI.push_back( static_cast <int> ( tmpD[1] * 100 ) );

  tmpD = ls.returnPaymentPlanWithConstantInstallments();
  tmpI.push_back( static_cast <int> ( tmpD[0] * 100 ) );
  tmpI.push_back( static_cast <int> ( tmpD[1] * 100 ) );

  if( ! (tmpI == expectedResult)) return 1;
  return 0;
}

bool UnitTesting::testEarlierRepayment()
{
  EarlierRepayment er;
  er.setBaseCredit( 2055770.98 );
  er.setBaseCreditRepaid( 20558 );
  er.setRecurringCharges( 15066.09 );
  er.setRecurringChargesRepaid( 2004.30 );
  er.setInitialCharges( 1789 );
  er.setPeriod( 2798 );
  er.setCurrentMonth( 150 );
  if( ! ( static_cast <int> ( ( er.baseToRepay() - er.chargesToBeReturned() ) * 100 ) == 203232327 ) ) return 1;
  return 0;
}
