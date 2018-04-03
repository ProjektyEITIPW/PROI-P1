#ifndef PRINTASCURRENCY_H
#define PRINTASCURRENCY_H

#include <iostream>
#include <iomanip>

using namespace std;

class PrintAsCurrency
{
  private:
    double currency;

  public:
    PrintAsCurrency ()
    {};
    PrintAsCurrency ( double val )
    {
      currency = val;
    }

    friend
    ostream& operator<< ( ostream &os, const PrintAsCurrency &toPrint ) ;
};

#endif // PRINTASCURRENCY_H
