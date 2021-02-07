#include<iostream.h>
#include<conio.h>
int stack[100],maxsize=100,top=-1;
class Stack
{
	int stack[100];
	public:
	void push(int val)
	{
		if(top>=maxsize-1)
		{
			cout<<"Stack overflow"<<endl;
		}
		else
		{
			top++;
			stack[top]=val;
		}
	}
	void pop()
	{
		int data;
		if(top<=-1)
		{
			cout<<"Stack underflow"<<endl;
		}
		else
		{
			data=stack[top];
			cout<<"The popped element is:"<<data<<endl;
			top--;
		}

	}
	void display()
	{
		int i;
		if(top>=0)
		{
			cout<<"Stack elements are:";
			for(i=0;i<=top;i++)
			{
				cout<<stack[i]<<" ";
				cout<<endl;
			}
		}
		else
		{
			cout<<"Stack is empty";
		}
	}
};
void main()
{
	clrscr();
	Stack s;
	int ch,val;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.Exit"<<endl;
	do{
		cout<<"Ebnter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value to be pushed:"<<endl;
				cin>>val;
				s.push(val);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4:
				cout<<"Exit"<<endl;
				break;
			default:
				cout<<"Invalid choice"<<endl;
		}
	}while(ch!=4);
	getch();
}
