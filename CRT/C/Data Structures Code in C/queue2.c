#include<stdio.h>
#include<stdlib.h>
// queue using malloc and menu driven option
struct queue
{
	int *a;
	int front;
	int rear;
	int size;
};
void enqueue(int);
void dequeue();
void display();
struct queue q;
void main()
{   int n;
	int choice;
	
	
	q.front=0;
	q.rear=-1;
	printf("Enter the size of the queue : ");
 	scanf("%d",&q.size);
	q.a=(int *)malloc(sizeof(int));
	do
	{
		printf("\n\n**MENU**\n");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\nEnter the your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the value to insert in a queue : ");
					scanf("%d",&n);
					enqueue(n);
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("Enter the valid choice ");					
		}
	}while(choice != 4);
}

void enqueue(int x)
{
	if(q.rear==q.size-1)
	{
		printf("\nQueue is full insertion is not possible ");
	}
	else
	{
		q.rear++;
		q.a[q.rear]=x;
	}
}
void dequeue()
{
	if (q.rear==-1 &&q.front==0)
	{
		printf("\nQueue is empty deletion is not possible ");
	}
	else
	{
		printf("\n%d is deleted from queue ",q.a[q.front]);
		q.front++;
		if(q.front==q.size-1)
		q.front=0;
	}
}
void display()
{   int i;
	if(q.rear==-1)
	{
		printf("\nQueue is empty ");
	}
	else
	{
		for(i=q.front;i<=q.rear;i++)
		{
			printf("\n%d\t",q.a[i]);
		}
		
	}
}
