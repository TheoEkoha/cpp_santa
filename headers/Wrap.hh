/*
** Wrap.hh for Wrap in /home/mathon_j/rendu/cpp_santa/headers
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 16:19:29 2015 Jérémy MATHON
** Last update Sat Jan 17 17:21:47 2015 Jérémy MATHON
*/

#ifndef WRAP_HH_
# define WRAP_HH_

# include	"Object.hh"
# include	"Toy.hh"

class	Wrap : public Object
{
protected:
  Toy	*toy;
  bool	close;
public:
  Wrap();
  virtual ~Wrap();
  void	wrapMeThat(Toy *);
  void	openMe();
  virtual void	closeMe() = 0;
};

#endif /* !WRAP_HH_ */
