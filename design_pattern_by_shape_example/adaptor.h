#pragma once
#include "shape.h"
class adaptor :
	public test_case
{
private:
	shape * m_shape;
public:
	adaptor(void);
	void draw(float r);
	virtual ~adaptor(void);
	void run();
};

