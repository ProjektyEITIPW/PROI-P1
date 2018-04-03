#ifndef EARLIERREPAYMENTINTERFACE_H
#define EARLIERREPAYMENTINTERFACE_H

#include <iostream>
#include <vector>
#include <string>

#include "PrintAsCurrency.h"
#include "EarlierRepayment.h"

class EarlierRepaymentInterface
{
  private:
    istream& is;
    ostream& os;
    vector <string> message =
    {
      "\nWprowadz calkowita czesc kapitalowa kredytu: ",
      "\nWprowadz splacona czesc kapitalowa kredytu: ",
      "\nWprowadz calkowita czesc odsetkowa kredytu (bez oplat poczatkowych): ",
      "\nWprowadz splacona czesc odsetkowa kredytu (bez oplat poczatkowych): ",
      "\nWprowadz kwote oplat poczatkowych: ",
      "\nWprowadz calkowity okres kredytowania w miesiacach: ",
      "\nWprowadz obecny okres kredytowania w miesiacach: ",
      "\nBy splacic czesc kapitalowa, klient musi wplacic ",
      "\nZ tytulu wczesniejszej splaty nalezy mu wtedy zwrocic ",
      "\nW zwiazku z tym, ostateczna kwota do splaty wynosi "
    };
    void EarlierRepaymentInterfaceRun();

  public:
    EarlierRepaymentInterface(istream& in, ostream& out)
      : is( in ),
        os( out )
    {
      EarlierRepaymentInterfaceRun();
    };


};

#endif // EARLIERREPAYMENTINTERFACE_H
