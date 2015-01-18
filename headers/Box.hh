#ifndef BOX_HH_
# define BOX_HH_

#include "Wrap.hh"

class Box : public Wrap
{
public:
	Box();
	void closeMe();
	bool wrapMeThat(Object *obj);
};

#endif