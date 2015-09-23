#include<iostream>
#include<string>
using namespace std;

class vect
{
	int pv;
	public:
	int a[10],ne;
	
	void get_vect()
	{
		cout<<"Enter number of elements:: ";
		cin>>ne;
		pv=ne;
		for(int i=0;i<ne;i++)
		{
			cout<<"a["<<i<<"] :: ";
			cin>>a[i];
		}
		cout<<endl;
	}

	void disp_vect()
	{
		for(int i=0;i<pv;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}

	vect & operator = (vect & v2)
	{
		v2.pv=pv;
		for(int i=0;i<pv;i++)
		{
			v2.a[i]=this->a[i];
		}
	}
};

class strng
{
	int pv;
	char * chs;
	int len;
	string ss;
	public:
	
	void get_str()
	{
		cout<<"Enter the string:: "<<endl;
                cin>>ss;
		len = ss.length();
		chs = new char [len];
		chs = ss.c_str();
	}

	void disp_str()
	{
		cout<<chs<<"\t"<<len<<endl;
	}

	strng & operator = (strng & s2)
	{
		s2.len = len;
		s2.chs = new char [s2.len];
		s2.chs = this->chs;
		return *this;
	}
	
};

main()
{
	vect v1,v2;
	v1.get_vect();
	v1.disp_vect();
	v1=v2;
	v2.disp_vect();
	strng s1,s2;
	s1.get_str();
	s1.disp_str();
	s1 = s2;
	s2.disp_str();
}
