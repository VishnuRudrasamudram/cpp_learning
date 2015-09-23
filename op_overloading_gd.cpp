// Operator overloading (prefix and postfix) 
// 		       -- global definitions

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
	
	friend vector & operator ++(vector& v);
	friend vector & operator ++(vector& v,int k);
	friend vector & operator +(vector& v,int k);

};

vector & operator ++(vector & v)
{
        for(int i=0;i<10;i++)
                v.A[i]++;

        return v;
}


vector & operator ++(vector & v,int k)
{
	for(int i=0;i<10;i++)
		v.A[i]++;

	return v;
}

vector & operator +(vector & v,int k)
{
        for(int i=0;i<10;i++)
                v.A[i] = v.A[i]+k;

        return v;
}


main()
{
	vector vi;
	
	((++vi)++)+9;
	cout<<"------------------------"<<endl;
	vi.disp_vec();
}
