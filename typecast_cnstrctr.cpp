#include<iostream>
using namespace std;

class fps
{
	int f,i;
	public:
	fps(int a)
	{
		f = a/12;
		i = a%12;
	}

	fps(int fe,int in)
	{
		f = fe;
		i = in;
	}

	operator int()
	{
		cout<<"Returned an integer..."<<endl;
		return f*12+i;
	}

	void disp()
	{
		cout<<f<<" "<<i<<endl;
	}
};

main()
{
	fps ob1(1,3);
	int z;
	z = 15;
	ob1 = z;

	ob1.disp();
}
