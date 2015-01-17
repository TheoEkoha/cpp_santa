//
// Table.cpp for Tale in /home/kinoo_m/rendu/cpp_santa/headers
// 
// Made by Martin Kinoo
// Login   <kinoo_m@epitech.net>
// 
// Started on  Sat Jan 17 18:58:33 2015 Martin Kinoo
// Last update Sat Jan 17 23:34:35 2015 Martin Kinoo
//

#include	"Table.hh"

ITable::~ITable()
{
  std::cout << "I don't need this table anymore.." << std::endl;
}

TablePePeNoel::TablePePeNoel() : ITable::ITable()
{
  int	i = 0;

  std::cout << "I create a new Table thanks to my magical power !!" << std::endl;
  while (i < 10)
    {
      objTab[i] = NULL;
      i++;
    }
}

bool	TablePePeNoel::Take(size_t index)
{
  if (index >= 10)
    {
      std::cout << "Hoho, i'm out of the table.." << std::endl;
      return false;
    }
  if (objTab[index])
    {
      std::cout << "I take 1 " << objTab[index]->getTitle() << " from the table at pos " << index << std::endl;
      objTab[index] = NULL;
      return true;
    }
  std::cout << "There isn't any object at pos " << index << std::endl;
  return false;
}

bool	TablePePeNoel::Put(Object *newObj)
{
  int	i = 0;

  if (!newObj)
    {
      std::cout << "Hoho, empty gift is not a good idea.." << std::endl;
      return false;
    }
  while (i < 10)
    {
      if (!objTab[i])
	{
	  objTab[i] = newObj;
	  return true;
	}
      i++;
    }
  std::cout << "Hoho, the table collapses.. I fix it.." << std::endl;
  return false;
}

const std::string	**TablePePeNoel::Look()
{
  const std::string **ret = new const std::string*[10];
  int		i = 0;
  int		j = 0;

  while (i < 10)
    {
      if (objTab[i])
	{
	  ret[j] = &(objTab[i]->getTitle());
	  j++;
	}
      i++;
    }
  while (j < 10)
    {
      ret[j] = NULL;
      j++;
    }
  if (!j)
    {
      std::cout << "Hoho, there isn't any object on the table.." << std::endl;
      return (NULL);
    }
  return ret;
}
