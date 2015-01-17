/*
** Teddy.cpp for Teddy in /home/mathon_j/rendu/cpp_santa/sources
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 14:14:31 2015 Jérémy MATHON
** Last update Sat Jan 17 14:33:19 2015 Jérémy MATHON
*/

#include	"Teddy.hh"

Teddy::Teddy(std::string const &name) : title(name)
{

}

Teddy::~Teddy()
{
}

void	Teddy::isTaken()
{
  std::cout << "gra hu" << std::endl;
}
