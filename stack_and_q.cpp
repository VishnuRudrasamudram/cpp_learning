#include<iostream>
using namespace std;

class vector
{
	int A[10];
	int temp,size;
	public:
	
	//friend stack::stack(int);
	vector(int siz)
	{
		size = siz;
		int i; 
		for(i=0;i<size;i++)
		{
			cin>>A[i];
		}
		for(;i<10;i++)
		{
			A[i] = 0;
		}
		
	}

	void insert(int pos, int ele)
	{
		temp = A[pos];
		A[pos] = ele;
		for(int i = size+1;i>pos;i--)
		{
			if(i==pos+1)
				A[i] = temp;
				
			else
				A[i] = A[i-1];
		}
	}

	int remove(int pos)
	{
		for(int i=pos;i<10;i++)
			A[i] = A[i+1];
	}

	void display_vec(int t)
	{
		for(int i=0;i<t;i++)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
};

class stack:public vector
{
	int top;
	public:

	stack(int a):vector(a)
	{
		top = a;	
	}
	bool stack_full()
	{
		return (top==10)?1:0;
	}
	
	bool stack_empty()
	{
		return (top == 0)?1:0;
	}

	void pop()
	{
		if(!(stack_empty()))
		{
			remove(top);
			top--;
			cout<<"top "<<top<<endl;
		}
		else
			cout<<"Stack is empty"<<endl;
	}	

	void push(int ele)
	{
		if(!(stack_full()))
		{
			insert(top,ele);
			top++;
			cout<<"top "<<top<<endl;
		}
		else
			cout<<"Stack is full"<<endl;
	}

	void display()
	{
		display_vec(top);
	}

};

class queue:public vector
{
	int front,rear;
	public:
	queue(int a):vector(a)
	{
		front = 0;
		rear = a;
	}

	bool q_full()
	{
		return (rear>4)?1:0;
	}
	bool q_empty()
        {
                return (front==rear)?1:0;
        }

        void pop()
        {
                if(!(q_empty()))
                {
                        remove(front);
                        rear--;
                        cout<<"front "<<front<<endl;
			cout<<"rear "<<rear<<endl;
                }
                else
                        cout<<"Q is empty"<<endl;
        }

        void push(int ele)
        {
                if(!(q_full()))
                {
                        insert(rear,ele);
                        rear++;
                        cout<<"front "<<front<<endl;
                        cout<<"rear "<<rear<<endl;

                }
                else
                        cout<<"Q is full"<<endl;
        }

        void display()
        {
                display_vec(rear-front);
        }
	
};

main()
{
	stack st(2);
	queue qu(2);
	int op,pv;
	cout<<"1.Stack 2.Queue"<<endl;
	int outr = 1;
	while(outr)
	{
		cin>>op;
		int run=1;
		switch(op)
		{
			case(1):
				cout<<"1.push 2.pop 3.stop"<<endl;
				while(run)
				{
					cin>>op;
					switch(op)
					{	
						case(1):
							cout<<"Enter value:: ";
							cin >>pv; 
							st.push(pv);
							st.display();
							break;
						case(2):
							st.pop();
							st.display();
							break;
						default:
							cout<<"Going back..."<<endl;
							run = 0;
					}
				
				}
				break;
			
			case(2):
                                cout<<"1.push 2.pop 3.stop"<<endl;
                          //      int run = 1;
                                while(run)
                                {
                                        cin>>op;
                                        switch(op)
                                        {
                                                case(1):
                                                        cout<<"Enter value:: ";
                                                        cin >>pv;
                                                        qu.push(pv);
                                                        qu.display();
                                                        break;
                                                case(2):
                                                        qu.pop();
                                                        qu.display();
                                                        break;
                                                default:
                                                        cout<<"Going back..."<<endl;
                                                        run = 0;
                                        }

                                }
                                break;
			default:
				cout<<"Exiting"<<endl;
				outr = 0;
	
		}

	}
}
