#include "Wrap.hh"

Wrap::Wrap()
{
	this->_obj = NULL;
	this->isOpen = false;
	std::cout << "whistles while working" << std::endl;
}

Wrap::~Wrap()
{

}

void Wrap::wrapMeThat(Object *obj)
{
	if (this->_obj == NULL)
	{
		this->_obj = obj;
		std::cout << "tuuuut tuuut tuut" << std::endl;
		this->isOpen = false;
	}
}

void Wrap::openMe()
{
	this->isOpen = true;
}

Object *Wrap::getObj()
{
	if (this->isOpen == true)
	{
		return (this->_obj);
	}
	return (NULL);
}