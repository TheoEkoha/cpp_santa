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
	virtual bool TakeTable(size_t) = 0;
	virtual bool PutTable(int) = 0;
	virtual bool TakeCB() = 0;
	virtual bool PutCB(int) = 0;
	virtual bool wrapMeThat() = 0;
	virtual void openMe(int) = 0;
	virtual void closeMe(int) = 0;
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
	void openMe(int);
	void closeMe(int);
};

enum objType
{
	WRAP = 1,
	OBJECT = 2
};

#endif