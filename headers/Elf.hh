#ifndef _ELF_HH_
# define _ELF_HH_

#include "Object.hh"
#include "Table.hh"
#include "ConveyorBelt.hh"

class IElf
{
public:
	virtual ~IElf() {}
	virtual bool Take() = 0;
	virtual bool Put() = 0;
};

class Elf : public IElf
{
protected:
	ITable *_table;
	IConveyorBelt *_cb;
	Object *_obj;
	Wrap *_wrap;
public:
	Elf(ITable *, IConveyorBelt *);
	~Elf();
	bool TakeTable(size_t);
	bool PutTable(int);
	bool TakeCB();
	bool PutCB(int);
};

enum objType
{
	WRAP = 1,
	OBJECT = 2
};

#endif