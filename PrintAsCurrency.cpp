#include "PrintAsCurrency.h"

ostream& operator<< ( ostream &os, const PrintAsCurrency &toPrint )
{
  os << setprecision (2) << fixed << toPrint.currency;
  return os;
}
