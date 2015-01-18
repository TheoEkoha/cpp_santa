#include "Elf.hh"

Elf::Elf(ITable *table, IConveyorBelt *cb)
{
	this->_table = table;
	this->_cb = cb;
	this->_obj = NULL;
	this->_wrap = NULL;
}

Elf::~Elf()
{

}

bool Elf::TakeTable(size_t pos)
{
	Object *tmp = this->_table->Take(pos);
	if (tmp != NULL)
	{
		if ((tmp->getTitle() == "Box" || tmp->getTitle() == "GiftPaper") 
			&& this->_wrap == NULL) 
		{
			this->_wrap = (Wrap *)tmp;
			return (true);
		}
		else if (this->_obj == NULL)
		{
			this->_obj = tmp;
			return (true);
		}
		else
			this->_table->Put(tmp);
	}
	return (false);
}

bool Elf::PutTable(int type)
{
	Object *tmp = (type == WRAP ? this->_wrap : this->_obj);
	if (this->_table->Put(tmp) == true)
	{
		if (type == WRAP)
			this->_wrap = NULL;
		else
			this->_obj = NULL;
		return (true);
	}
	return (false);
}

bool Elf::TakeCB()
{
	Object *tmp = this->_cb->Take();
	if (tmp != NULL)
	{
		if ((tmp->getTitle() == "Box" || tmp->getTitle() == "GiftPaper") 
			&& this->_wrap == NULL) 
		{
			this->_wrap = (Wrap *)tmp;
			return (true);
		}
		else if (this->_obj == NULL)
		{
			this->_obj = tmp;
			return (true);
		}
		else
			this->_table->Put(tmp);
	}
	return (false);
}

bool Elf::PutCB(int type)
{
	if (type == WRAP && this->_wrap != NULL 
		&& this->_cb->Put(this->_wrap) == true)
	{
		this->_wrap = NULL;
		return (true);
	}
	else if ((this->_obj->getTitle() == "Box" || this->_obj->getTitle() == "GiftPaper") 
		&& this->_obj != NULL && this->_cb->Put((Wrap *)this->_obj) == true)
	{
		this->_obj = NULL;
		return (true);
	}
	return (false);
}

bool Elf::wrapMeThat()
{
	if (this->_wrap != NULL && this->_obj != NULL)
	{
		if (this->_wrap->wrapMeThat(this->_obj))
		{
			this->_obj = NULL;
			return (true);
		}
	}
	return (false);
}
