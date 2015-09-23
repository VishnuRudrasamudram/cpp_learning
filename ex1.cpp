// Creating classes 

#include<stdio.h>

class vector
{
	private:
		int vec[100],ne;
	
	public:
		void get()
		{
			int i;
			printf("Enter number of elements: ");
			scanf("%d",&ne);
			
			for(i=0;i<ne;i++)
			{	
				printf("vec[%d]:",i);
				scanf("%d",&vec[i]);
			}
			

		}

		void put()
		{
			int i;
			printf("[ ");
			for(i=0;i<ne;i++)
			{	
				printf("%d ",vec[i]);
			}
			printf("]\n");
		}

		void sum_vec()
		{
			int sum=0;
			for(int i=0;i<ne;i++)
			{
				sum+=vec[i];
			}
			printf("Sum of elements of the vectors: %d\n",sum);
		}
};

class clsstr
{
	private:
		char strng[100];

	public:
		void get()
		{
			printf("Enter a string:: ");
			gets(strng);
		}

		void put()
		{
			printf("%s\n",strng);
		}
};	
main()
{
	vector a;
	clsstr s;
	a.get();
	a.put();
	a.sum_vec();
	s.get();
	s.put();
}	
