#include "Wrap.hh"

Wrap::Wrap(const std::string &tit) : Object(tit)
{
	this->_obj = NULL;
	this->isOpen = false;
	std::cout << "whistles while working" << std::endl;
}

Wrap::~Wrap()
{

}

bool Wrap::wrapMeThat(Object *obj)
{
	if (this->_obj == NULL || obj == NULL)
	{
		this->_obj = obj;
		std::cout << "tuuuut tuuut tuut" << std::endl;
		this->isOpen = false;
		return (true);
	}
	else
	{
		std::cout << "The object to wrap doesn't exist, or there is already an object in the wrap." << std::endl;
	}
	return (false);
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
	else
	{
		std::cout << "Wrap is closed and the object can't be get." << std::endl;
		return (NULL);
	}
}