#ifndef WRAP_HH_
# define WRAP_HH_

#include "Object.hh"

class Wrap : public Object
{
protected:
	Object *_obj;
	bool isOpen;
public:
	Wrap();
	~Wrap();
	void wrapMeThat(Object *);
	void openMe();
	Object *getObj();	
};

#endif