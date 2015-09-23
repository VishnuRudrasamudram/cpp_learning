#include<iostream>
using namespace std;
void swap(int,int);
main()
{
	int a, b;
	a=10,b=20;
	cout<<a<<endl;

	swap(a,b);
	cout<<a<<b<<endl;
	
}

void swap(int p, int q)
{
	int temp;
	temp = p;
	p=q;
	q=temp;
cout<<p<<endl<<q<<endl;
}
