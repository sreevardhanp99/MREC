#include<stdio.h>
#define size 10
int f=-1, r=-1, queue[size];
void main()
{
	int choice,val;
	printf("Queue implementation : ");
	while(1)
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter the value to be insert into queue : ");
					scanf("%d",&val);
					insert(val);
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default : printf("\nEnter valid option ");		
		}
			
	}
}
void insert(int x)
{
	if(r==size-1)
	{
		printf("\nQueue is full ");
	}
	else
	{
		r++;
		queue[r]=x;
		printf("\n%d is inserted into the queue ",x);
		if(f==-1)
			f=0;
	}
}

void delete()
{
	if(f==-1)
		printf("\nQueue is empty deletion is not possible");
	else
	{
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
			f++;
			
	}
}
void display()
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("%d\t",queue[i]);
	}
}

