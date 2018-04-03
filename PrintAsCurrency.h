#ifndef PRINTASCURRENCY_H
#define PRINTASCURRENCY_H

#include <iostream>
#include <iomanip>

using namespace std;

class PrintAsCurrency
{
  private:
    ostream &os;

  public:
    PrintAsCurrency(ostream &out)
      : os( out )
      {};

    void print( double to_print );
};

#endif // PRINTASCURRENCY_H
