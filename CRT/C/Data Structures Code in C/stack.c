#include<stdio.h>
struct stack
{
	int a[5];
	int top;
};
struct stack s; // 24 bytes memory is allocated 
void main()
{   s.top=-1;
	push(10);
	push(20);
	push(30);
	push(40);
	displayStack();
	int x=pop();
	printf("\nPoped element is %d ",x);
	
}
void push(int x)
{
	if(s.top==4)
	{
		printf("Stack is full no insertion is possible ");
	}
	else
	{
		s.top++;
		s.a[s.top]=x;
		
	}
}
int pop()
{
	int x;
	if(s.top==-1)
	{
		printf("Stack is empty deletion is not possible ");
		x=-1;
	}
	else
	{
		x=s.a[s.top];
		s.top--;
	}
	return x;
}
void displayStack()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("\n%d",s.a[i]);
	}
}
