/*
** LittlePony.cpp for LittlePony in /home/mathon_j/rendu/cpp_santa/sources
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 14:10:36 2015 Jérémy MATHON
** Last update Sat Jan 17 14:35:01 2015 Jérémy MATHON
*/

#include	"LittlePony.hh"

LittlePony::LittlePony(std::string const &name) : Toy(name)
{

}

LittlePony::~LittlePony()
{

}

void	LittlePony::isTaken()
{
  std::cout << "yo man" << std::endl;
}
