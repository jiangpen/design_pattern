#include "StdAfx.h"
#include "singleton.h"

static singleton * m_instance=NULL;
singleton::singleton(void)
{
	
}

singleton * singleton::getinstance()
{
	if(m_instance==NULL)
		m_instance=new singleton();
	return m_instance;
}

singleton::~singleton(void)
{
}

void singleton::run()
{
	
	singleton * p1=singleton::getinstance();
	singleton *p2=singleton::getinstance();
	printf("singleton test %d, %d\r\n", p1, p2);
}