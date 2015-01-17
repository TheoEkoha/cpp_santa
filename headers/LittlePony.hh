/*
** LittlePony.hh for LittlePony in /home/mathon_j/rendu/cpp_santa/headers
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 14:02:54 2015 Jérémy MATHON
** Last update Sat Jan 17 14:45:52 2015 Jérémy MATHON
*/

#ifndef LITTLEPONY_HH_
# define LITTLEPONY_HH_

# include	"Toy.hh"

class	LittlePony : public Toy
{
public:
  LittlePony(std::string const &);
  ~LittlePony();
  void	isTaken();
};

#endif /* !LITTLEPONY_HH_ */
