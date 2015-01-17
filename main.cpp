#include <iostream>
#include <string>

#include "Object.hh"
#include "Teddy.hh"
#include "LittlePony.hh"

Object **MyUnitTests()
{
  Object **obj = new Object*[2];

  obj[0] = new LittlePony("gay pony");
  obj[1] = new Teddy("bisounours");

  return (obj);
}

Object *MyUnitTests(Object **toMake)
{
  toMake = toMake;

  return (NULL);
}

int main(void)
{
  Object **obj = MyUnitTests();

  LittlePony *lp = (LittlePony *)obj[0];
  Teddy *t = (Teddy *)obj[1];

  lp->isTaken();
  t->isTaken();

  return (0);
}
