// Operator overloading (prefix and postfix) 
// 		       -- member functions

#include<iostream>
using namespace std;

class vector
{


	int A[10];
	public:
	
	vector()
	{
		for(int i=0;i<10;i++)
			cin>>this->A[i];
	}

	void disp_vec()
	{
		for(int i=0;i<10;i++)
			cout<<this->A[i]<<endl;
	}

	//cout<<"\n"<<endl;

	vector & operator ++()
	{
	        for(int i=0;i<10;i++)
	                this->A[i]++;
	
	        return *this;
	}

	
	vector & operator ++(int k)
	{
		for(int i=0;i<10;i++)
			this->A[i]++;
	
		return *this;
	}


	vector & operator +(int k)
	{
	        for(int i=0;i<10;i++)
	                this->A[i] = this->A[i]+k;
	
	        return *this;
	}
};

main()
{
	vector vi;
	
	((++vi)++)+9;
	cout<<"------------------------"<<endl;
	vi.disp_vec();
}
