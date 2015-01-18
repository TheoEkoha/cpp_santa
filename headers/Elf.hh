#ifndef _ELF_HH_
# define _ELF_HH_

class IElf
{
public:
	virtual ~IElf() {}
};

class Elf : public IElf
{
protected:
	ITable *_table;
	IConveyorBelt *_cb;
	Toy *_toy;
	Wrap *_wrap;
public:
	Elf();
	~Elf();
	
};

#endif