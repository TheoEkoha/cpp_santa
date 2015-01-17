#ifndef WRAP_HH_
# define WRAP_HH_

#include "Object.hh"

class Wrap : public Object
{
protected:
	Object *_obj;
	bool isOpen;
public:
	Wrap(const std::string &);
	virtual ~Wrap();
	void wrapMeThat(Object *);
	void openMe();
	virtual void closeMe() = 0;
	Object *getObj();	
};

#endif