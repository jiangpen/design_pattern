// design_pattern_by_shape_example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

#include "shape.h"
#include "singleton.h"
#include "abstractfactory.h"
#include "adaptor.h"
#include "composite.h"
#include "Decorator.h"
/*
singleton//only create a single instance
abstractfactory//goal: to create different instance dynamically with different parameter
builder//goal: to create instance with different attibutes by setting different parameter
adapter //goal: to encapcuate the existing interfaces to new interface, these interace are not comppatible
bridge //Goal:interface and implement can vary different.
composite
decorator
facade
proxy
observer//goal: notify the 

Chain of responsibility
command
Visitor
Strategy
Mediator
*/


int _tmain(int argc, _TCHAR* argv[])
{
	patten_tester * tester=new patten_tester();
	tester->register_case(singleton::getinstance());
	tester->register_case(new abstractfactory());
	tester->register_case(new adaptor());
	tester->register_case(new composite());
	tester->register_case(new Decorator());
	tester->run();
	getchar();
	return 0;
}

