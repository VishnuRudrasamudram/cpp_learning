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
	
	void rd(int size)
	{
		n = read(fds,buff,size);
	}

	void wr()
	{
		write(fdd,buff,n);
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
	myFile myf("src","dest");
	myf.rd(100);
	myf.wr();
}
