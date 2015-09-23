#include<iostream>
using namespace std;

class rect
{
	int len,wid;
	public:
	rect()
	{
		int a,b;
		cin>>a>>b;
		len = a;
		wid = b;
	}
	rect(int a, int b)
	{
		len=a;
		wid=b;
	}

	void disp_dim()
	{
		cout<<"Dimensions of the rectangle :: "<<len<<"x"<<wid<<endl;
	}

	


	rect operator+(rect &r1)
	{
		rect r3;
		r3.len = r1.len + this->len;
		r3.wid = r1.wid + this->wid;
		
		return r3;
	}
};

main()
{
	rect a,b,c;
	c = a+b;
	c.disp_dim();
}
