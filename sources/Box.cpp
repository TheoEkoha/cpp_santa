/*
** Box.cpp for Box in /home/mathon_j/rendu/cpp_santa/sources
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 17:01:32 2015 Jérémy MATHON
** Last update Sat Jan 17 17:24:11 2015 Jérémy MATHON
*/

#include	"Box.hh"

Box::Box() : Wrap()
{
}

Box::~Box()
{

}

void	Box::closeMe()
{
  if (this->close != false)
    {
      std::cout << "The box is already closed." << std::endl;
    }
  this->close = true;
}
