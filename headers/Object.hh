/*
** Object.hh for Object in /home/mathon_j/rendu/cpp_santa/headers
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 14:03:38 2015 Jérémy MATHON
** Last update Sat Jan 17 14:11:21 2015 Jérémy MATHON
*/

#ifndef OBJECT_HH_
# define OBJECT_HH_

# include	<iostream>
# include	<string>

class	Object
{
protected:
	const std::string title;
public:
  Object(const std::string &);
  virtual ~Object();
  const std::string &getTitle() const;
};

#endif /* !OBJECT_HH_ */
