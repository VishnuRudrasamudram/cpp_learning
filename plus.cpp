#include<iostream>
using namespace std;


class Vector
{
	int a[3];
	public:
	   	void add(int x,int y)
	   	{
			int sum=x+y;
			cout<<x<<"+"<<y<<endl;
		}
		void get()
		{
			int i;
			cout<<"Enter the array of integers\n";
			for(i=0;i<3;i++)
			cin>>a[i];
		}


	//friend void operator +(Vector & , Vector &);
		void put()
		{
			int i;
			for(i=0;i<3;i++)
			cout<<"\n"<<a[i]<<endl;
		}
	 Vector & operator + (Vector &);
	
};

Vector& Vector::operator +(Vector &v2)
{
	int i;
	for(i=0;i<3;i++)
a[i]=a[i]+v2.a[i];
	return *this;
}

int main()
{
Vector vi,vj,vk;
vi.get();
vj.get();
vk.get();
cout<<"vi ::"<<endl;
vi.put();
cout<<"vj ::"<<endl;
vj.put();
cout<<"vk ::"<<endl;
vk.put();
cout<<"vi+vj+vk ::"<<endl;
vi+vj+vk;

vi.put();
cout<<"vj ::"<<endl;
vj.put();
cout<<"vk ::"<<endl;
vk.put();
}


