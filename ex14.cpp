#include<iostream>
using namespace std;

int &max(int &p, int &q)
{
	if(p>q)
		return p;
	else
		return q;
}

main()
{
int a, b;

a=10,b=20;
cout << max(a,b)<<endl;

max(a,b) = 13;

cout << max(a,b)<<endl;

}
