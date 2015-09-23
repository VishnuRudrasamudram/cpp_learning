#include<iostream>

using namespace std;

//class der;

class base
{
	int a;

	public:
	friend void fun1(base & b);
	//friend class der;

	void get()
	{
		cout<<"Enter an integer:: "<<endl;
		cin>>a;
	}
};

void fun1(base & b)
{
	cout<<"global friend fun\n"<<b.a<<endl;
}


class der
{
	public:
	void fun1(base & b)
	 {
	//	cout<<b.a<<endl;
		cout << "Member friend fn \n";
	 }
};

main()
{
	der d;
	base b;
	b.get();
	d.fun1(b);
	fun1(b);
}

