#include<iostream>
using namespace std;

class Base
{
	int a;
	public:
	Base(int c)
	{
		cout<<"this is base class"<<endl;
		cin>>a;
		if(a>c)
			cout<<"A"<<endl;
		else
			cout<<"C"<<endl;
	}
	void msg()
	{
		cout<<"it is another member in Base."<<endl;
	}
};

main()
{
	Base * b;
	b = new Base(9);
	delete b;	
	b->msg();
}	


