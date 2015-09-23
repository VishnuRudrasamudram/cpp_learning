#include<iostream>
using namespace std;

class A
{
	public:
	A(int x, int y, char c[] = "RED",int thick=7, char p[]= "dotted" )
	{
	
	cout << "Length "<<x+y<<endl;
	cout << "Color "<<c<<endl;
	cout << "Thickness "<<thick<<endl;
	cout << "Pattern "<<p<<endl;
	
	}	

};

main()
{
	A a(3,4,"Blue",7);
}
