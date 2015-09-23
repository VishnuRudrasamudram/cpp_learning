#include<stdio.h>


main()
{
	int a, b;
	a=10,b=20;
	printf("%d %d \n",a,b);

	swap(&a,&b);
	printf("%d %d \n",a,b);
}

void swap(int * a, int * b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}
