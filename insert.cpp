#include<iostream>

using namespace std;

int main()
{
	int a[100];
	int size, pos, ele;
	cout<<"Enter number of elements:: ";
	cin>>size;
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}

	cout<<"Enter position to insert element:: ";
	cin>>pos;
	cout<<"Enter element:: ";
	cin>>ele;
	int temp;
	temp = a[pos];
	a[pos] = ele;
	for(int i = size+1;i>pos;i--)
	{
		if(i==pos+1)
			a[i] = temp;
		else
			a[i] = a[i-1];
	}	

	for(int i=0;i<size+1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;

}
