#include<stdio.h>
struct stack
{
	int *a;
	int top;
	int size;
};
struct stack s; // 24 bytes memory is allocated 
void main()
{   
	int choice,n;
	s.a=(struct stack*)malloc(sizeof(struct stack));
	printf("Enter the size of the stack : ");
	scanf("%d",&s.size);
    
	s.top=-1;
	do
    {
	  printf("\n\n**MENU**\n\n");
	  printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
	  printf("Enter your choice : ");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	  	case 1: printf("Enter the element to be inserted : ");
	  			scanf("%d",&n);
	  			push(n);
	  			break;
	  	case 2: pop();
	  			break;
	  	case 3: displayStack();
	  			break;
	  	case 4 : exit(0);
	  	default : printf("\nChoose correct choice ");
	  }
	}while(choice!=4);	
}
void push(int x)
{
	if(s.top==s.size-1)
	{
		printf("\nStack is full insertion is possible ");
	}
	else
	{
		s.top++;
		s.a[s.top]=x;
		
	}
}
void pop()
{
	int x;
	if(s.top==-1)
	{
		printf("\nStack is empty deletion is not possible ");
	}
	else
	{
		// x=s.a[s.top];
		printf("\n%d is deleted from stack",s.a[s.top]);
		s.top--;
	}
	// return x;
}
void displayStack()
{
	int i;
	if(s.top==-1)
	{
		printf("\nStack is empty ");
	}
	else
	{
		printf("\nStack elements are : \n");
		for(i=s.top;i>=0;i--)
		{
			printf("\n%d",s.a[i]);
		}
	}
}
