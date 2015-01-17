#include "Box.hh"

void Box::closeMe()
{
	this->isOpen = false;
}

void Box::wrapMeThat(Object *obj)
{
	if (this->isOpen == true)
	{
		Wrap::wrapMeThat(obj);
	}
}