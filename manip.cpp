#include<iostream>
#include<ios>
using namespace std;

class manip
{
	public:

};

ostream  & operator <<(ostream & o, manip m)
{
	int n;
	o<<n*n<<endl;
	return o;
}

main()
{
	manip m;
	int n=100;
	cout<<m<<n<<endl;
	//cout<<"Another one..."<<endl;
	//cout.width(10);
	//cout<<m<<"After manipulation..."<<endl;
	cout<<"another one..."<<endl;
}
