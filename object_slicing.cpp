#include<iostream>
using namespace std;

class Base
{
	public:
	
	virtual void show()
	{
		cout<<"Base class"<<endl;
	}
};

class Der:public Base
{
	public:
	void show()
	{
		Base::show();
		cout<<"Apart from what I inherited, I am adding some stupid things"<<endl;
	}

};

void fun(Base *c)
{
	cout<<"Currently, I don't know what it does... O_o"<<endl;
	c->show();
}

int main()
{
	Base b;
	Der d;
	
	fun(&b);
}
