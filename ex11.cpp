#include<iostream>
using namespace std;

class Student
{
	string name;
	int age;
	int sno;
	Time dob;
	public:

	Student()
	{
		cout<<"Serial No. :: "endl;
		cin >> sno;
		cout<<"Enter name:: "<<endl;
		cin >> name;
		dob.get_date();
		
	}
	void display_details()
	{
		cout<<"Serial no. :: "<<sno<<endl;
		cout<<"Name :: "<<name<<endl;
		dob.show_date();
	}
};

class Time
{
	int y, m, d;
	public:
	void get_date()
	{
		cout<<"year:: "<<endl;
		cin>>y;
		cout<<"month:: "<<endl;
                cin>>m;
		cout<<"date:: "<<endl;
                cin>>d;
	}
	
	void show_date()
	{
		cout<<d<<"/"<<m<<"/"<<y<<endl;
	}
};

main()
{
	Student st;
	st.display_details();
}
