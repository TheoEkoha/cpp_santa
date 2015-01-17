#ifndef BOX_HH_
# define BOX_HH_

#include "Wrap.hh"

class Box : public Wrap
{
public:
	void closeMe();
	void wrapMeThat(Object *obj);
};

#endif