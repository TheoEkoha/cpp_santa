#include <iostream>
#include <string>

#include "Object.hh"
#include "Teddy.hh"
#include "LittlePony.hh"
#include "Wrap.hh"
#include "Box.hh"
#include "GiftPaper.hh"
#include "Table.hh"

Object **MyUnitTests()
{
  Object **obj = new Object*[2];

  obj[0] = new LittlePony("gay pony");
  obj[1] = new Teddy("bisounours");

  return (obj);
}

Object *MyUnitTests(Object **toMake)
{
  Teddy *ted = (Teddy *)toMake[0];
  Box *box = (Box *)toMake[1];
  GiftPaper *gp = (GiftPaper *)toMake[2];

  box->openMe();
  box->wrapMeThat(ted);
  gp->wrapMeThat(box);

  return (gp);
}

ITable *createTable()
{
  return new TablePePeNoel;
}

int main(void)
{
  Object **obj = MyUnitTests();

  LittlePony *lp = (LittlePony *)obj[0];
  Teddy *t = (Teddy *)obj[1];
  ITable *theTruc = createTable();
  const std::string **myTab;
  theTruc->Put(new Teddy("Beer"));
  theTruc->Put(new Teddy("Pokemon"));
  theTruc->Put(new LittlePony("Jeremy"));

  theTruc->Take(1);
  myTab = theTruc->Look();
  int i = 0;
  while (myTab[i])
    {
      std::cout << *myTab[i] << std::endl;
      i++;
    }
  lp->isTaken();
  t->isTaken();

  obj = new Object*[4];

  obj[0] = new Teddy("bisounours");
  obj[1] = new Box;
  obj[2] = new GiftPaper;
  obj[3] = NULL;
  
  std::cout << obj[1]->getTitle() << std::endl;
  std::cout << obj[2]->getTitle() << std::endl;

  MyUnitTests(obj);

  return (0);
}
