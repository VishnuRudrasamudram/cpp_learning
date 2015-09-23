#include<iostream>
using namespace std;

main()
{
	int a, b;
	a=10,b=20;

	swap(&a,&b);
	cout<<a<<','<<b<<endl;
}

void swap(int * a, int * b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=*temp;
}
