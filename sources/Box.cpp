#include "Box.hh"

Box::Box() : Wrap("Box")
{

}

void Box::closeMe()
{
	if (this->isOpen == false)
		std::cout << "Box already opened." << std::endl;
	this->isOpen = false;
}

void Box::wrapMeThat(Object *obj)
{
	if (this->isOpen == true)
		Wrap::wrapMeThat(obj);
	else
		std::cout << "Box is closed and can't be used to wrap anything." << std::endl;
}