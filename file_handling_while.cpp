#include<iostream>
#include<fcntl.h>
#include<string>

using namespace std;

char buff[200];

int n;

class myFile
{
	int fds,fdd;
	public:

	myFile(char * srcf, char * desf)
	{
		//cout<<srcf<<"is opened..."<<endl;
		fds = open(srcf,O_RDONLY);
		fdd = open(desf,O_WRONLY);
		
	}
	
	void rdNwr(int size)
	{
		do{		
			n = read(fds,buff,size);
			write(fdd,buff,n);
		}while(n!=0);
	}
	
 
	~myFile()
	{
		cout<<"Closing the file..."<<endl;
		close(fds);
		close(fdd);
	}
	
};

main()
{
	myFile myf("ex5.cpp","new_dest");
	myf.rdNwr(100);
	//myf.wr();
}
