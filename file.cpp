#include<fcntl.h>
#include<iostream>
class IFILE
{
int fd;
public:
 int n;
 char A[5];

 IFILE()
 {
  fd=open("src",'r');

  read(0,A,5); 
  write(2,A,5); 
 } 
/*
 {
 close();
 }*/



/*
void Read(A,n)
{ 
  read(fd,A,n);
}


void Write(A,n)
 {
   write(1,A,n);
 }
*/
};
main()
{
 IFILE f;
// n=f.Read(A,30);
 //f.Write(A,30);
 
}
