#include "StdAfx.h"
#include "composite.h"


composite::composite(void)
{
}


composite::~composite(void)
{
}
pallet::pallet(int n)
{
	m_shape=(shape **)(new shape *[n]);
	for(int i=0; i<n; i++)
	{
		m_shape[i]=NULL;
	}
	num=n;
	//int *p=new int[10];
}
void pallet::add(shape * p)
{
	for(int i=0; i<num; i++)
	{
		if(m_shape[i]==NULL)
		{
			m_shape[i]=p;
			break;
		}
	}
}

void pallet::draw()
{
	for(int i=0; i<num; i++)
	{
		if(m_shape[i]!=NULL)
		{
			m_shape[i]->draw();
			
		}
	}
}


void canvas::add(pallet *p)
{
	for(int i=0; i<num; i++)
	{
		if(m_pallet[i]==NULL)
		{
			m_pallet[i]=p;
			break;
		}
	}
}

void canvas::draw()
{
	for(int i=0; i<num; i++)
	{
		if(m_pallet[i]!=NULL)
		{
			m_pallet[i]->draw();
			
		}
	}
}


canvas::canvas(int n)
{
	m_pallet=(pallet **)new pallet *[n];
	for(int i=0; i<n; i++)
	{
		m_pallet[i]=NULL;
	}
	num=n;
}
void composite::run()
{
	printf("run from composite test\r\n");
	pallet * apallet=new pallet(3);
	apallet->add(new circle(1));
	apallet->add(new square(1));
	apallet->add(new rectangle(1,1));

	pallet * apallet1=new pallet(3);
	apallet1->add(new circle(1));
	canvas * acan=new canvas(2);

	acan->add(apallet);
	acan->add(apallet1);
	acan->draw();

}