#ifndef _ELF_HH_
# define _ELF_HH_

#include "Object.hh"
#include "Wrap.hh"
#include "Table.hh"
#include "ConveyorBelt.hh"

class IElf
{
public:
	virtual ~IElf() {}
	virtual bool TakeTable() = 0;
	virtual bool TakeCB() = 0;
	virtual bool PutTable() = 0;
	virtual bool PutCB() = 0;
	virtual bool wrapMeThat() = 0;
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
	bool wrapMeThat();
};

enum objType
{
	WRAP = 1,
	OBJECT = 2
};

#endif