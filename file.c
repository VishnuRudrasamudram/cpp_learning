#include<stdio.h>
#include<fcntl.h>

char A[100];
main()
{
	int rfd,wfd,n;
	wfd = open("dest",O_WRONLY);
	rfd = open("src",O_RDONLY);
	printf("wfd %d\n",wfd);
	printf("rfd %d\n",rfd);
	do
	{
		n = read(rfd,A,15);
		printf("%d\n",n);
		write(wfd,A,n);
	}while(n!=0);

	close(rfd);
	close(wfd);
}

