// i/o overloading -- member functions

#include<iostream>
using namespace std;

class vector
{


	int A[10];
	public:
	
	vector()
	{
		cout<<"This is vector class"<<endl;
		for(int i=0;i<10;i++)
			cin>>this->A[i];
	}	
	
	friend class myostream;
};

class myostream:public ostream
{
	public:
	myostream & operator << (vector v)
	{
		for(int i=0;i<10;i++)
		cout<<"A["<<i<<"] = "<< v.A[i]<<endl;
		return *this;
	}
};

/*
	istream & operator >> (istream & o)
	{
		for(int i=0;i<10;i++)
	        	o>>A[i];
	}
*/
main()
{
	vector vi;
	myostream mcout;
	mcout<<vi;
}
