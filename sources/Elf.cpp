#include "Elf.hh"

ElfPePeNoel::ElfPePeNoel(ITable *table, IConveyorBelt *cb)
{
	this->_table = table;
	this->_cb = cb;
	this->_obj = NULL;
	this->_wrap = NULL;
}

ElfPePeNoel::~ElfPePeNoel()
{

}

bool ElfPePeNoel::TakeTable(size_t pos)
{
	Object *tmp = this->_table->Take(pos);
	if (tmp != NULL)
	{
		if ((tmp->getTitle() == "Box" || tmp->getTitle() == "GiftPaper") 
			&& this->_wrap == NULL) 
		{
			this->_wrap = (Wrap *)tmp;
			std::cout << "whistles while working" << std::endl;
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

bool ElfPePeNoel::PutTable(int type)
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

bool ElfPePeNoel::TakeCB()
{
	Object *tmp = this->_cb->Take();
	if (tmp != NULL)
	{
		if ((tmp->getTitle() == "Box" || tmp->getTitle() == "GiftPaper") 
			&& this->_wrap == NULL) 
		{
			this->_wrap = (Wrap *)tmp;
			std::cout << "whistles while working" << std::endl;
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

bool ElfPePeNoel::PutCB(int type)
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

bool ElfPePeNoel::wrapMeThat()
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

void ElfPePeNoel::openMe(int type)
{
	if (type == WRAP && this->_wrap != NULL)
		this->_wrap->openMe();
	else if (this->_obj != NULL && (this->_obj->getTitle() == "Box" || this->_obj->getTitle() == "GiftPaper"))
	{
		Wrap *tmp = (Wrap *)this->_obj;
		tmp->openMe();
	}
}

void ElfPePeNoel::closeMe(int type)
{
	if (type == WRAP && this->_wrap != NULL)
		this->_wrap->closeMe();
	else if (this->_obj != NULL && (this->_obj->getTitle() == "Box" || this->_obj->getTitle() == "GiftPaper"))
	{
		Wrap *tmp = (Wrap *)this->_obj;
		tmp->closeMe();
	}
}

void ElfPePeNoel::IN()
{
	this->_cb->IN();
}

void ElfPePeNoel::OUT()
{
	this->_cb->OUT();
}

const std::string **ElfPePeNoel::LookTable()
{
	return (this->_table->Look());
}

const std::string *ElfPePeNoel::LookCB()
{
	return (this->_cb->Look());
}
