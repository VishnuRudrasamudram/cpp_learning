// i/o overloading -- global definition

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

	friend ostream & operator << (ostream & o, vector v);
	friend istream & operator >> (istream & o, vector & v);

};	

ostream & operator << (ostream & o, vector v)
{
	for(int i=0;i<10;i++)
	o <<"A["<<i<<"] = "<< v.A[i]<<endl;
	return o;
}

istream & operator >> (istream & o, vector & v)
{
	for(int i=0;i<10;i++)
        	o>>v.A[i];
	return o;
}

main()
{
	vector vi,vj;
	cin>>vi>>vj;
	cout<<vi<<vj;
}
