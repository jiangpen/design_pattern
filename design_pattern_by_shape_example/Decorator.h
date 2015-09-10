#pragma once
#include "shape.h"
class Decorator :
	public test_case, shape
{
	shape *m_p;
public:
	Decorator(void);
	Decorator(shape * p);
	virtual ~Decorator(void);
	void draw();
	int getarea();
	void run();
};

