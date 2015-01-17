#include <iostream>
#include <string>

#include "Teddy.hh"
#include "LittlePony.hh"

int main(void)
{
  Teddy tmp("toto");
  LittlePony tmp2("truc");

  tmp.isTaken();
  tmp2.isTaken();
  return (0);
}
