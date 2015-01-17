/*
** Wrap.cpp for Wrap in /home/mathon_j/rendu/cpp_santa/sources
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 16:18:46 2015 Jérémy MATHON
** Last update Sat Jan 17 17:24:36 2015 Jérémy MATHON
*/

#include	"Wrap.cpp"

Wrap::Wrap() : toy(NULL), close(false)
{
  std::cout << "whistles while working" << std::endl;
}

Wrap::~Wrap()
{
}

void	Wrap::wrapMeThat(Toy* toy)
{
  if (toy == NULL)
    {
      std::cout << "The elf needs a toy to wrap !" << std::endl;
      return ;
    }
  this->toy = toy;
  if (this->toy->getWrap() == true)
    {
      std::cout << "A wrap HAVE TO containing someting cannot wrap." << std::endl;
      return ;
    }
  this->toy->setWrap(true);
  std::cout < "tuuuut tuuut tuut" << std::endl;
}

void	Wrap::openMe()
{
  if (this->toy == NULL || this->toy->getWrap() == false)
    {
      std::cout << "The elf can't open this wrap." << std::endl;
      return ;
    }
  this->toy->setWrap(false);
  this->~Wrap();
}

void	Wrap::closeMe()
{
}
