#include<iostream>
using namespace std;

class vector{
public:
	int n,a[];
	void get()
	{
		int i;
		cout << "Enter number of elements ==> ";
		cin >> n;
		cout << "\n";
		
		for(i=0;i<n;i++)
		{
			cout << "enter a[" << i << "] element ==> ";
			cin >> a[i]; 
		}
	}
	void put()
	{	
		int j;
		
		for(j=0;j<n;j++)
		{
			cout<<a[j];
		}
		cout << "\n";
	}	
};


int main()
{
vector v;
v.get();
v.put();
return 0;
}



