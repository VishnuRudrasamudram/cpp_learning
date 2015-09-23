#include<iostream>
#include<string.h>
using namespace std;

class strin
{
	int len;
	char stri[20];
	public:
	void get()
	{
		strcpy(stri,"Hello");
		cout<<stri<<"Enter the string to be displayed"<<endl;
		cin>>stri;
	}
	void put()
	{
		cout<<stri;
	}
};

int main()
{
	strin str;
	str.get();
	str.put();
}

