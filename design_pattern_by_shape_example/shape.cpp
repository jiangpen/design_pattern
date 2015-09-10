#include "StdAfx.h"
#include "shape.h"


shape::shape(void)
{
}

void shape::draw()
{
}

int shape::getarea ()
{
	return m_area;
}
void shape::setarea(int a)
{
	m_area=a;
}
shape::~shape(void)
{
}
rectangle::rectangle()
{
}
rectangle::rectangle(int p1, int p2)
{
	setarea(p1*p2);
}

void rectangle::draw()
{
	printf("rectangle::draw\r\n");
}



circle::circle(int r)
{
	setarea((int)(3.1415*r*r));
}
void circle::draw()
{
	printf("circle::draw\r\n");
}


square::square(int l)
{
	len1=l;
	len2=l;
	setarea(l*l);
}

void square::draw()
{
	printf("square::draw\r\n");
}

test_case::test_case()
{
}

test_case::test_case(int pid)
{
	m_id=pid;
}

patten_tester::patten_tester()
{
	for(int i=0; i<MAXCASE; i++)
	m_list[i]=NULL;

	m_num=0;
}

void patten_tester::register_case(test_case * t)
{//test_case* mlist[]
	for(int i=0; i<MAXCASE; i++)
	{
		if(m_list[i]==NULL)
		{
			m_list[i]=t;
			break;
		}
	}
}

void patten_tester::run()
{
	for(int i=0; i<MAXCASE; i++)
	{
		if(m_list[i]!=NULL)
		{
			m_list[i]->run();
		}

	}
}