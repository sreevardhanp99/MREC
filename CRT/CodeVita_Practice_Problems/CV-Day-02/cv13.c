#include<stdio.h>
#define size 100
int a[size];
int top=-1;
void push(int x)
{
	if(top==size-1)
	{
		printf("\nStack is full ");
	}
	else
	{
		top++;
		a[top]=x;
		printf("\n%d is inserted into the stack : ",x);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty ");
	}
	else
	{
		printf("\n%d is deleted from stack ",a[top]);
		top--;
	}	
} 
void display()
{	int i;
	if(top==-1)
	{
		printf("Stack is empty ");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\t",a[i]);
		}
	}
}
void main()
{	int choice;
	int val;
	printf("Stack implementation : \n");
	while(1)
	{
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter the value to be insert in stack: ");
					scanf("%d",&val);
					push(val);
					break;
			case 2:pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default : printf("\nEnter valid choice ");
		}
	}
	
}