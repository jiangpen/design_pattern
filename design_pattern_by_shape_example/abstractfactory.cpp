#include "StdAfx.h"
#include "abstractfactory.h"


shape *squareFactory::createShape()
{
	return new square(1);
}

shape * circleFactory::createShape()
{
	return new circle(1); 
}
abstractfactory::abstractfactory(void)
{
}

shape * abstractfactory::createFactShape(int type)
{
	shape * temp=NULL;
	if(type==0)
		temp=(new squareFactory())->createShape();
	else if(type==1)
		temp=(new circleFactory())->createShape();

	return temp;
}
abstractfactory::~abstractfactory(void)
{
}


shape * abstractfactory::createShape(int type)
{
	if(type==0)
	{
		return new circle(1);
	}
	else if(type==1)
	{
		return new rectangle();
	}
	else if(type==2)
	{
		return new square(1);
	}

}


void abstractfactory::run()
{
  shape * p=createShape(0);
  p->draw();
  delete p;

  p=createShape(1);
  p->draw();
  delete p;

  p=createShape(2);
  p->draw();
  delete p;

  p=createFactShape(0);
    p->draw();
  delete p;

    p=createFactShape(1);
    p->draw();
  delete p;
}

