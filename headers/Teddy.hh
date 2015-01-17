/*
** Teddy.hh for Teddy in /home/mathon_j/rendu/cpp_santa/headers
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 14:05:16 2015 Jérémy MATHON
** Last update Sat Jan 17 14:33:14 2015 Jérémy MATHON
*/

#ifndef TEDDY_HH_
# define TEDDY_HH_

# include	"Toy.hh"

class	Teddy : public Toy
{
  const std::string	title;
public:
  Teddy();
  ~Teddy();
  void	isTaken();
};

#endif /* !TEDDY_HH_ */
