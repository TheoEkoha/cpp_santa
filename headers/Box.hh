/*
** Box.hh for Box in /home/mathon_j/rendu/cpp_santa/headers
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 17:03:29 2015 Jérémy MATHON
** Last update Sat Jan 17 17:11:30 2015 Jérémy MATHON
*/

#ifndef BOX_HH_
# define BOX_HH_

# include	"Wrap.hh"

class	Box : public Wrap
{
public:
  Box();
  ~Box();
  void closeMe();
};

#endif /* !BOX_HH_ */
