#pragma once
#include "shape.h"
class singleton :
	public test_case
{
	singleton(void);
public:
	static singleton *getinstance();
	virtual ~singleton(void);
	virtual void run(void);
};

