#pragma once
#include "shape.h"
class squareFactory
{
public:
	shape * createShape();
};

class circleFactory
{
public:
	shape * createShape();
};

class abstractfactory :
	public test_case, squareFactory,circleFactory
	
{
public:
	shape * createShape(int type);
	shape * createFactShape(int type);
	abstractfactory(void);
	virtual ~abstractfactory(void);
	virtual void run(void);
};



