// i/o overloading -- member functions

#include<iostream>
using namespace std;

class vector
{


	int A[10];
	public:
	
	vector()
	{
		for(int i=0;i<10;i++)
			cin>>this->A[i];
	}

	friend ostream & operator << (ostream & , vector );

};	

ostream & operator << (ostream & o, vector v)
{
	for(int i=0;i<10;i++)
	o <<"A["<<i<<"] = "<< v.A[i]<<endl;
	return o;
}

main()
{
	vector vi,vj;

	cout<<vi<<vj;
}
