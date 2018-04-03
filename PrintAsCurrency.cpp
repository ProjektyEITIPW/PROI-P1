#include "PrintAsCurrency.h"

void PrintAsCurrency::print( double to_print )
{
  os << setprecision (2) << fixed << to_print;
}
