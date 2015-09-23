// Giving access of private section using 'friend'

#include<iostream>

using namespace std;

class ABC
{
	int p;
	public:
	friend class XYZ;
	void f1()
	{
		cout<<"enter an integer:: ";
		cin>>p;			// this will be saved in p which is in private section
	}
};

ABC k;

class XYZ
{
	int q;
	public:
	void f2()
	{
		cout<<"integer given to class ABC :: "<<k.p<<"\n";
	}
};

main()
{

	XYZ x;
	k.f1();
	x.f2();

}
