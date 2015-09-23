// Dynamic linking illustration

#include<iostream>
#include<string>
using namespace std;

class vector
{
	public:
		int a[100],ne;
	
		void get()
		{
			int i;
			cout<<"Enter number of elements:: ";
			cin>>ne;
			for(i=0;i<ne;i++)
			{
				cout<<"vec["<<i<<"] : ";
				cin>>a[i];
			}
		}
		
		virtual int maxList()	
		{
			return 9;
		}

		void put()
		{
			cout<<"[ ";
			for(int i=0;i<ne;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<"]\n";
		}
};

class fnList:public vector
{
	public:

	int maxList()
	{
		int max = 0;
		int i;
		for(i=0;i<ne;i++)
		{
			if(a[i]>max)
				max = a[i];
		}
		return max;
	}

	int avgList()
	{
		int sum=0;
		int i;
		for(i=0;i<ne;i++)
		{
			sum+=a[i];
		}
		int avg;
		avg = sum/ne;
		return avg;
	}

	int maxList(int m)
	{
		int mid;
		mid = a[m];
	//	cout<<"Middle element in the list:: "<<mid<<"\n";
	}
};

class fn2List:public fnList
{

	public:
	int maxList()
	{
		int min=a[0];
		int i;
		for(i=0;i<ne;i++)
		{
			if( a[i]<min)
				min = a[i];
			
		}
		return min;
	
	}

};



main()
{
	vector obj;
	vector *pt;
	fnList obj2;
	pt = &obj2;
	(*pt).get();
	(*pt).put();

	int max,min;
	max = (*pt).maxList();
	cout << max <<"\n";
	
	fn2List s;
	pt = &s;
	(*pt).get();
	min = (*pt).maxList();
	cout<<min<<"\n";

}
	
