#include<iostream>
#include<stdio.h>
#include<fcntl.h>
#include<string>

using namespace std;

char a[100];
int n;


class Ifile
{
int fd;
public:
Ifile(char &);
~Ifile();
void RD(int);
void WRITE();
};

Ifile::Ifile(char &fname[])
{
cout<<"Constructor\n";
fd=open("fname",O_RDONLY);
}

Ifile::~Ifile()
{
//write(1,a,n);
cout<<"Destructor\n";
close(fd);
}

void Ifile::RD(int size)
{

n=read(fd,a,size);
}
 
void Ifile:: WRITE()
{
write(1,a,n);
}


int main()
{
string file_name;
cin>>file_name;
Ifile o(f);
o.RD(50);
o.WRITE();
return 0;

}
