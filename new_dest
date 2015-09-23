// This is to illustrate constructor calling in multilevel inheritence 

#include<iostream>
#include<string>
using namespace std;

class A
{
	int a;
	public:
	
	A(int a1)
	{
		cout<<"I took this from class C :: "<<a1<<"\n";
	}

};

class B
{
	int b;
	public:
	B(int b1, int b2)
	{
		cout<<"I took this from class C:: "<<b1<<" "<<b2<<"\n";
	}
};

class C:public B,public A
{
	int c;
	public:
	C(int c1, int c2, int c3):A(c3),B(c2,c3)
	{
		cout<<"I kept only first argument:: "<<c1<<"\n";
	}

	C(int);	
	
};

C::C(int c1):A(c1),B(c1,c1)
{
	cout<<"outer function:: "<<c1<<endl;
}
main()
{
	C c(1);
}
