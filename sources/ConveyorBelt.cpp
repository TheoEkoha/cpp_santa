//
// ConveyorBelt.cpp for ConveyorBelt in /home/kinoo_m/rendu/cpp_santa
// 
// Made by Martin Kinoo
// Login   <kinoo_m@epitech.net>
// 
// Started on  Sun Jan 18 02:18:12 2015 Martin Kinoo
// Last update Sun Jan 18 05:07:59 2015 Martin Kinoo
//

#include	<cstdlib>
#include	<ctime>
#include	"ConveyorBelt.hh"

ConveyorBeltPePeNoel::ConveyorBeltPePeNoel() : myWrap(new GiftPaper)
{}

IConveyorBelt::~IConveyorBelt()
{}

Wrap		*ConveyorBeltPePeNoel::IN()
{
  bool		isBox;

  if (myWrap)
    {
      std::cout << "I don't have to press on IN, there is already a warp on my conveyor belt" << std::endl;
      return NULL;
    }
  srand(time(NULL));
  isBox = rand() % 2;
  if (isBox)
    myWrap = new Box;
  else
    myWrap = new GiftPaper;
  std::cout << "The conveyor belt give me a " << myWrap->getTitle() << " !" << std::endl;
  return myWrap;
}

bool		ConveyorBeltPePeNoel::OUT()
{
  if (!myWrap)
    {
      std::cout << "I have to press IN button before OUT button, I forget every time.." << std::endl;
      return false;
    }
  std::cout << "I send you a " << myWrap->getTitle() << ", Santa !" << std::endl << " Santa says: ";
  if (!(myWrap->getObj()))
    std::cout << "you send me an empty wrap, stupid elf !!" << std::endl;
  else
    std::cout << "and one more gift for a wise child, good job elf !!" << std::endl;
  delete myWrap;
  myWrap = NULL;
  return true;
}

const std::string	&ConveyorBeltPePeNoel::Look()
{
  if (!myWrap)
    return NULL;
  return myWrap->getTitle();
}

bool		ConveyorBeltPePeNoel::Put(Wrap *newWrap)
{
  if (myWrap)
    {
      std::cout << "Their is already a wrap on my conveyor belt" << std::endl;
      return false;
    }
  myWrap = newWrap;
  std::cout << "I put a " << myWrap->getTitle() << " on my conveyor belt" << std::endl;
  return true;
}

Wrap		*ConveyorBeltPePeNoel::Take()
{
  Wrap		*tmp;

  if (!myWrap)
    {
      std::cout << "My conveyor belt doesn't have any wrap.." << std::endl;
      return NULL;
    }
  std::cout << "I take a " << myWrap->getTitle() << " on my conveyor belt" << std::endl;
  tmp = myWrap;
  tmp = NULL;
  return (tmp);
}
