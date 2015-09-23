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
	}	

	ostream & operator << (ostream & o)
	{
		for(int i=0;i<10;i++)
		o <<"A["<<i<<"] = "<< A[i]<<endl;
	}

	istream & operator >> (istream & o)
	{
		for(int i=0;i<10;i++)
	        	o>>A[i];
	}
};

main()
{
	vector vi;
	vi>>vi;
	vi<<vi;
}
