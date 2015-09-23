// This is to illustrate overloading and overriding concepts in inheritence

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
	int avgList()
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

class strng
{
	public:
	string s;
	void get()
	{
		cout<<"Enter a string:: ";
		cin>>s;
	}
	
	void put()
	{
		cout<<s<<"\n";
	}
};

class strng_op:public strng
{
	public:
	string cc;
	void add_str(string a)
	{	
		cc = a+s;
		cout<<cc<<"\n";
	}
};


main()
{
	fn2List v;
	strng_op ss;
	v.get();
	v.put();
	int max,avg;
	max = v.maxList();
	//max = v.maxList(3); Overloaded function in the same level 
	avg = v.avgList();	// this function in fn2List class overrides the function
				// with same name in parent class (fnList)

	cout<<"Maximum in vector ::"<<max<<"\n";
	cout<<"Average of vector ::"<<avg<<"\n";

	ss.get();
	ss.add_str("Hello ");
}
