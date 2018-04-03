#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <string>

using namespace std;

class Input
{
  private:
    istream& is;
    ostream& os;
    const string message = "Wprowadzona wartosc jest nieprawidlowa. Sprobuj ponownie.\n";

    void iFlush ();

  public:
    Input ( istream& in, ostream& out )
      : is( in ),
        os( out )
    {};
    void read ( int& toRead );
    void read ( double& toRead );
    void read ( bool& toRead );
};

#endif // INPUT_H
