/*
** Object.cpp for Object in /home/mathon_j/rendu/cpp_santa/sources
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Jan 17 14:09:58 2015 Jérémy MATHON
** Last update Sat Jan 17 14:10:31 2015 Jérémy MATHON
*/

#include	"Object.hh"

Object::Object(const std::string &tit) : title(tit)
{

}

Object::~Object()
{
}

const std::string &Object::getTitle() const
{
	return (this->title);
}