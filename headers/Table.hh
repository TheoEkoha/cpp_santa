//
// Table.hh for Table in /home/kinoo_m/rendu/cpp_santa/headers
// 
// Made by Martin Kinoo
// Login   <kinoo_m@epitech.net>
// 
// Started on  Sat Jan 17 18:51:18 2015 Martin Kinoo
// Last update Sat Jan 17 22:59:04 2015 Martin Kinoo
//

#ifndef		_TABLE_HH_
# define	_TABLE_HH_

# include	"Object.hh"

class		ITable
{
public:
  virtual ~ITable();
  virtual bool addObj(Object *) = 0;
  virtual const std::string **Look() = 0;
};

class		TablePePeNoel : public ITable
{
private:
  Object *objTab[10];
public:
  TablePePeNoel();
  bool addObj(Object *);
  const std::string **Look();
};

#endif
