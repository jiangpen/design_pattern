#pragma once
class shape
{
int m_area;
public:
	shape(void);
	virtual ~shape(void);
public:
	virtual void draw()=0;
	virtual int getarea();
	virtual void setarea(int p);
};

class circle: public shape
{
	int len1;
public:
	circle(int p);
virtual	void draw();

};

class rectangle: public shape
{
	public:
	int len1, len2;

	rectangle();
	rectangle(int p1, int p2=1);
	virtual void draw();
};

class square: public rectangle
{
	int len;
public:
	square(int p1);
	

	virtual void draw();

};


class test_case
{
	int m_id;
public:
	test_case();
	test_case(int pid);
	virtual void run()=0;
};

class patten_tester
{
	static const int MAXCASE=23;
	test_case * m_list[MAXCASE];//test_case* mlist[]
	int m_num;
public:
	patten_tester();
	void register_case(test_case * t);
	void run();
};
