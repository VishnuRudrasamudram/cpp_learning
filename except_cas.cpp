#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

class Base
{
	char a;
	public:
	Base(char z)
	{
		a=z;
		cout<<"constructing..."<<a<<endl;
	}

	~Base()
	{
		cout<<"Destructing..."<<a<<endl;
	}

};

void f1()
{
	cout<<"function 1"<<endl;
	Base a('a');
	throw 5;	
}

void f2()
{
	cout<<"function 2"<<endl;
	try
	{
		Base b('b');
		f1();
	} catch(string msg)
	{	
		cerr<<"String catch"<<endl;
	}
	
}

void f3()
{
	cout<<"function 3"<<endl;
	Base c('c');
	try
	{
		Base d('d');
		f2();
	} catch(char msg)
	{
		cerr<<"char catch"<<msg<<endl;
	}catch(int i)
	{
		cerr<<"int catch..."<<i<<endl;
	}catch(...)
	{
		cerr<<"generic catch"<<endl;
	}
}	

main()
{
	f3();
	system("clear");
}
