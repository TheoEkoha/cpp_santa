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

void Elf::TakeTable(size_t pos)
{
	if ((Object *tmp = this->_table->Take(pos)) == true)
	{
		if ((tmp->getTitle() == "Box" || tmp->getTitle() == "GiftPaper") 
			&& this->_wrap == NULL) 
			this->_wrap = tmp;
		else if (this->_obj == NULL)
			this->_obj = tmp;
		else
			this->_table->Put(tmp);
	}
}

void Elf::PutTable(int type)
{
	Object *tmp = (type == WRAP ? this->_wrap : this->_obj);
	if (this->_table->Put(tmp) == true)
	{
		if (type == WRAP)
			this->_wrap = NULL;
		else
			this->_obj = NULL;
	}
}

void Elf::TakeCB()
{
	if ((Object *tmp = this->_cb->Take(pos)) == true)
	{
		if ((tmp->getTitle() == "Box" || tmp->getTitle() == "GiftPaper") 
			&& this->_wrap == NULL) 
			this->_wrap = tmp;
		else if (this->_obj == NULL)
			this->_obj = tmp;
		else
			this->_table->Put(tmp);
	}
}

void Elf::PutCB(int type)
{
	if (type == WRAP && this->_wrap != NULL 
		&& this->_cb->Put(this->_wrap) == true)
		this->_wrap = NULL;
	else if ((this->_obj->getTitle() == "Box" || this->_obj->getTitle() == "GiftPaper") 
		&& this->_obj != NULL && this->_cb->Put(this->_obj) == true)
		this->_obj = NULL;
}
