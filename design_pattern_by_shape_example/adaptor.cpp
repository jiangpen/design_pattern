#include "StdAfx.h"
#include "adaptor.h"


adaptor::adaptor(void)
{
	
}


adaptor::~adaptor(void)
{
}

void adaptor::draw(float f)
{

	m_shape=new circle((int)f);
	m_shape->draw();
	delete m_shape;
}

void adaptor::run()
{
	printf("adaptor from float to int\r\n");
	draw(5.0);
}