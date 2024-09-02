#include<stdio.h>
struct queue
{
	int a[5];
	int front;
	int rear;
};  // 24 bytes memory allocated
struct queue q;
int main()
{   
	q.front=0;
	q.rear=-1;
	enqueue(11);
	enqueue(12);
	enqueue(13);
	enqueue(14);
	
	display();
	
	int x = dequeue();
	printf("\nDeleted element : %d ",x);
	return 0;
}
void enqueue(int x)
{
	if(q.rear==4)
	{
		printf("\nQueue is full and Insertion is not possible ");
	}
	else
	{
		q.rear++;
		q.a[q.rear]=x;
	}
}
int dequeue()
{	int x;
	if(q.rear==-1)
	{
		printf("\nQueue is empty and deletion is not possible ");
	}
	else
	{
		x=q.a[q.front]; 
		q.front++;
	}
	return x;
}
void display()
{
	int i;
	if(q.rear==-1)
	{
		printf("\nQueue is empty ");		
	}
	else
	{
		for(i=q.front;i<=q.rear;i++)
		{
			printf("%d\t",q.a[i]);
		}
	}
}

