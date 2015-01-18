//
// ConveyorBelt.hh for ConveyorBelt in /home/kinoo_m/rendu/cpp_santa
// 
// Made by Martin Kinoo
// Login   <kinoo_m@epitech.net>
// 
// Started on  Sun Jan 18 01:25:23 2015 Martin Kinoo
// Last update Sun Jan 18 03:34:29 2015 Martin Kinoo
//

#ifndef		_CONVEYOR_BELT_HH_
# define	_CONVEYOR_BELT_HH_

# include	"GiftPaper.hh"
# include	"Box.hh"
# include	"Object.hh"
# include	"Wrap.hh"

class		IConveyorBelt
{
public:
  virtual ~IConveyorBelt();
  virtual Wrap *IN() = 0;
  virtual bool OUT() = 0;
  virtual bool Put(Wrap *) = 0;
  virtual Wrap *Take() = 0;
  virtual const std::string &Look() = 0;
};

class		ConveyorBeltPePeNoel : public IConveyorBelt
{
private:
  Wrap		*myWrap;
public:
  ConveyorBeltPePeNoel();
  Wrap		*IN();
  bool		OUT();
  bool Put(Wrap *);
  Wrap *Take();
  const std::string	&Look();
};

#endif
