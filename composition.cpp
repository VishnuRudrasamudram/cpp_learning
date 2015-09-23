#include<iostream>
using namespace std;

class student;
class dob
{
	public:	
	int date,month,year;
	dob()
	{

	};	

};

class student
{
	public:
	int stid;
	char stname; 
	dob d;
	student()
	{
        dob d;
        }

};

main()
{
student st;
st.stname = 'c';
cout<< "student name :: "<<st.stname<<endl;
st.stid = 326366;
cout<< "student id :: "<<st.stid<<endl;
st.d.date = 5;
st.d.month =6;
st.d.year = 1994;

cout<< "student DoB :: "<< st.d.date <<"/"<< st.d.month<<"/"<<st.d.year<<endl;
}
