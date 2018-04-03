//System symulacji kredytów bankowych
//Wojciech Krupski 2I1

#include <iostream>
#include "MainInterface.h"

using namespace std;

int main()
{
  cout << "System symulacji kredytow bankowych" << endl
       << "Wojciech Krupski 2I1";
  MainInterface mi ( cin, cout );
  while ( !(mi.mainInterfaceRun()) );
  return 0;
}
