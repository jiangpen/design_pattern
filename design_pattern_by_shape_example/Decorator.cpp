#include "StdAfx.h"
#include "Decorator.h"
/*
Adapter 	Converts one interface to another so that it matches what the client is expecting
Decorator 	Dynamically adds responsibility to the interface by wrapping the original code
Facade 	Provides a simplified interface
*/

Decorator::Decorator(void)
{
}
Decorator::Decorator(shape * p)
{
	m_p=p;
}

Decorator::~Decorator(void)
{
}

int Decorator::getarea()
{
	return m_p->getarea()* 1000;
}


void Decorator::draw()
{
	if(getarea()>1000)//proxy style
	{
		m_p->draw();
	}
}
void Decorator::run()
{
	Decorator * r=new Decorator(new circle(1)); 
	
	printf("decorator area=%d\r\n", r->getarea());
}

