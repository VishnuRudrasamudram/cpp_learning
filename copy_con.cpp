#include<iostream>
using namespace std;

class Test
{
	int a;
	public:
	Test (int k)
	{
		a=k;
		cout<<a<<endl;
	}

	Test (const Test &k)
	{
		a=k.a;
		cout<<a<<endl;
	}
};

main()
{
	Test t(5);
	Test t1(t);
}
