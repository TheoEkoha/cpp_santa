/*
** Toy.hh for Toy in /home/mathon_j/rendu/cpp_santa/headers
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 14:05:45 2015 Jérémy MATHON
** Last update Sat Jan 17 16:50:03 2015 Jérémy MATHON
*/

#ifndef TOY_HH_
# define TOY_HH_

# include	"Object.hh"

class	Toy : public Object
{
protected:
  const std::string	title;
  bool			wrap;
public:
  Toy(std::string const &);
  virtual	~Toy();
  virtual void	isTaken() = 0;
};

#endif /* !TOY_HH_ */
