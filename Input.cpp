#include "Input.h"

void Input::iFlush ()
{
  is.clear();
  is.ignore(1000, '\n');
}

void Input::read ( int& toRead )
{
  while ( ! ( is >> toRead ) || ! ( toRead > 0 ) )
    {
      os<<message;
      iFlush();
    }
}

void Input::read ( double& toRead )
{
  while ( ! ( is >> toRead ) || toRead < 0 )
    {
      os<<message;
      iFlush();
    }
}

void Input::read ( bool& toRead )
{
  while ( ! ( is >> toRead ) )
    {
      os<<message;
      iFlush();
    }
}
