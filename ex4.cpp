// Illustration of constructors with overloading

#include<iostream>
#include<string>
using namespace std;

class vector
{
	int pv;
	public:
		int a[100],ne;
	
		vector()
		{
			int i;
			cout<<"Enter number of elements:: ";
			cin>>ne;
			pv = ne;
			cout<<pv<<endl;
			for(i=0;i<ne;i++)
			{
				cout<<"vec["<<i<<"] : ";
				cin>>a[i];
			}
		}
	
		virtual int  maxList()
		{
			return 0;
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

		 vector(int m,int e)
                {
                        ne = e;
                        for(int i=0;i<ne;i++)
                        {
                                a[i] = m;
                        }
                }

};

class fnList:public vector
{
	public:
	int maxList( )
	{
		cout<<pv<<endl;	
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



main()
{
	vector v;
	vector *pt;
	pt = &v;
	(*pt).put();
	fnList v2;
	pt = &v2;
	int max,avg;
	max = (*pt).maxList();
	//max = v.maxList(3); //Overloaded function in the same level 
	//avg = v.avgList();	// this function in fn2List class overrides the function
				// with same name in parent class (fnList)

	cout<<"Maximum in vector ::"<<max<<"\n";
	//cout<<"Average of vector ::"<<avg<<"\n";

}
