#include<iostream>
using namespace std;

class exep
{
	int a,b;
	public:
	
	exep(int c, int d)
	{
		a=c;
		b=d;
	}

	void division()
	{
		int r;
		if(b==0)
			throw "trying to divide with 0\n";
		r=a/b;
		cout<<"Result:: "<<r<<endl;
	}

	void date(int dd,int mm, int yy)
	{
		if (mm>12)
			throw "month can not exceed 12\n";
	}
};

main()
{
	int x,y,mm;
	cin>>x>>y>>mm;
	exep obj(2,0);

	try{
	obj.division();
	} catch(const char* msg)
	{
		cerr<<msg<<endl;
	}

	try{
		obj.date(12,mm,14);
	}catch(const char* msg)
	{
		cerr<<msg<<endl;
	}
}
