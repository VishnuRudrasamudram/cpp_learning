#include<iostream>
using namespace std;

class Base
{
	int i;
	protected:
		int a;
	public:
	void take_in()
	{
		cout<<"enter a number:: "<<endl;
		cin>>a;
		i=a;
	}

	void show()
	{
		cout<<"Given number is "<<i<<endl;
	}
};

/*class Derived:public Base
{
	public:
	void square()
	{
		cout<<"square of number given in Base "<<a*a<<endl;
	}
	
};
*/

/*class Derived:protected Base
{
        public:
	Base::take_in;
        void square()
        {
                cout<<"square of number given in Base "<<a*a<<endl;
        }

};*/

class Derived:protected Base
{
        public:
        //Base::take_in;
        void square()
        {
		take_in();
                cout<<"square of number given in Base "<<a*a<<endl;
        }

};


main()
{
	Derived d;
	d.take_in();
	//d.show();
	d.square();
}
