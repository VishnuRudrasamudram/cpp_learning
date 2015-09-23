#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	A(int a1)
	{	
		cout<<"Class A:: "<<a1<<endl;
	}

	/*void a_out()
	{
		cout<<"Class A:: "<<a<<endl;
	}*/
};

class B:public A
{
	int b;
	public:
	B(int  b1, int b2):A(b2)
	{
		cout<<"Class B:: "<<b1<<endl;

	}

	/*void b_out()
	{
		 cout<<"Class B:: "<<b<<endl;
	}*/

};

class C: public A
{
	int c;
	public:
	C(int c1,int c2): A(c2)
	{	
		cout<<"Class C:: "<<c1<<endl;

	}

	/*void c_out()
	{
		 cout<<"Class C:: "<<c<<endl;
	}*/
};

class D:public B,public C
{
	int d;
	public:
	D(int d1,int d2,int d3): C(d2,d1),B(d2,d3)
	{
		cout<<"Class D::"<<d1<< endl;
	}
};

main()
{
	D d(1,2,3);
	/*d.c_out();
	d.b_out();
	d.a_out();*/
}
