#include "StdAfx.h"
#include "basic.h"


class sortclass
{
	public:
	int value;

	sortclass();
	sortclass(int p);
	int sortclass::operator >(sortclass &other);
	int sortclass::operator <(sortclass &other);
	sortclass& sortclass::operator=( const sortclass& other ) ;
};
sortclass& sortclass::operator=( const sortclass& other ) {
      value = other.value;
   
      return *this;
  }
sortclass::sortclass()
{
	value=0;
}

sortclass::sortclass(int p)
{
	value=p;
}

int sortclass::operator >(sortclass &other)
{
	if(other.value<value)
		return 1;
	else
		return 0;
}

int sortclass::operator <(sortclass &other)
{
	if(other.value>value)
		return 1;
	else
		return 0;
}

template <class Type>
int selectSort(Type * table, int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		Type item=table[i];
		int index=-1;
		for(j=i; j<n; j++)
		{
			if(table[j]<item)
			{
				item=table[j];
				index=j;
			}
		}

		if(index>=0)
		{
			Type tmp=table[i];
			table[i]=table[index];
			table[index]=tmp;
		}
	}
	return 0;
}
basic::basic(void)
{
}


basic::~basic(void)
{
}
class MyClass
{
	public:
	MyClass& MyClass::operator=( const MyClass& other ) ;
	void * MyClass::operator new( size_t t ) ;
	MyClass();
	int x;
};



MyClass::MyClass()
{
}
MyClass carray[100];
void * MyClass::operator new(size_t t)
{
	static int count=0;
	if(count<100)
	return (void *)&(carray[count++]);
	else
		return NULL;
}

MyClass& MyClass::operator=( const MyClass& other ) {
      x = other.x;
   
      return *this;
  }

void Swap2 (int *x, int *y) // pass-by-value (pointers)
{
int temp = *x;
*x = *y;
*y = temp;
}
void Swap3 (int &x, int &y) // pass-by-reference
{
int temp = x;
x = y;
y = temp;
}

void basic::run()
{

	const char *str1 = "pointer to constant";
	char str4[]={'a','b'};
	char *const str2 = str4;
const char *const str3 = "constant pointer to constant";
//str1[0] = 'P'; // illegal!
str1 = "ptr to const"; // ok
//str2 = "const ptr"; // illegal!
str2[0] = 'P'; // ok
//str3 = "const to const ptr"; // illegal!
//str3[0] = 'C'; // illegal!

double num1 = 3.14;
double &num2 = num1; // num is a reference to num1, same

const int &x = 1;
//++x;
int y = x + 1;


  MyClass a,b;

  b.x =5;
  a=b;
  MyClass *p=new MyClass();
  printf("%d, %d, %d, %d\r\n", a.x, p, &carray[0], sizeof(MyClass));


  int i0=10, i1=20;
  Swap2(&i0, &i1);
  printf("%d, %d\r\n", i0, i1);
   i0=10, i1=20;
  Swap3(i0, i1);
  printf("%d, %d\r\n", i0, i1);
  //int& AssocVec::operator [] (const char *idx)
  //count["apple"] = 5;
  int inputi[]={10, 0, 2, 4, 6, 8, 9};
  char inputc[]={'k', 'b', 'a', 'c', 'z', 'm'};
  selectSort(inputi, sizeof(inputi)/sizeof(int));
  for(int i=0; i<sizeof(inputi)/sizeof(int); i++)
  {
	  printf("\r\n%d,", inputi[i]); 
  }
   selectSort(inputc, sizeof(inputc)/sizeof(char));
     for(int i=0; i<sizeof(inputc)/sizeof(char); i++)
  {
	  printf("\r\n%c,", inputc[i]); 
  }


	 sortclass mysort[10];
	 for(int i=0; i<10; i++)
	 {
		 sortclass tmp(10-i);
		 mysort[i]= tmp;
	 }
	 printf("%d, %d\r\n",sizeof(mysort), sizeof(sortclass ));
	  selectSort(mysort, sizeof(mysort)/sizeof(sortclass ));
     for(int i=0;  i<sizeof(mysort)/sizeof(sortclass ); i++)
  {
	  printf("\r\n%d,%d,", i, mysort[i].value); 
  }



}
