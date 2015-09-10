#pragma once
#include "shape.h"

class pallet
{
	shape ** m_shape;
	int num;
public:
	void add(shape * p);
	void draw();
	pallet(int n);
};

class canvas
{
	pallet ** m_pallet;
	int num;
public:
	void add(pallet * p);
	void draw();
	canvas(int n);
};

class composite :
	public test_case
{
public:
	composite(void);
	virtual ~composite(void);
	virtual void run();
};

