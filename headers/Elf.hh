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
	virtual void IN() = 0;
	virtual void OUT() = 0;
	virtual const std::string **LookTable() = 0;
	virtual const std::string *LookCB() = 0;
};

class ElfPePeNoel : public IElf
{
protected:
	ITable *_table;
	IConveyorBelt *_cb;
	Object *_obj;
	Wrap *_wrap;
public:
	ElfPePeNoel(ITable *, IConveyorBelt *);
	~ElfPePeNoel();
	bool TakeTable(size_t);
	bool PutTable(int);
	bool TakeCB();
	bool PutCB(int);
	bool wrapMeThat();
	void openMe(int);
	void closeMe(int);
	void IN();
	void OUT();
	const std::string **LookTable();
	const std::string *LookCB();
};

enum objType
{
	WRAP = 1,
	OBJECT = 2
};

#endif