#include<stdio.h>
#define max 6
void enqueue();
void dequeue();
void display();
int queue[max];
int n,c;
int front=-1;
int rear=-1;
void main()
{
	do
	{
		printf("enter choice\n 1:enqueue\n 2:dequeue\n 3:display\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: enqueue(); break;
			case 2: dequeue(); break;
			case 3: display(); break;
			default:printf("wrong choice"); break;		
			}
	}while(c!=0);
}
void enqueue()
{
	int element;
	printf("enter the element to be inserted:");
	scanf("%d",&element);
	if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=element;
	}
	else if((rear+1)%max==front)
	{
		printf("queue is overflow");
		
	}
	else
		{
		
		rear=(rear+1)%max;
		queue[rear]=element;
	}
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
    	printf("\n Queue is underflow");
    
	}
	else if(front==rear)
	{
	printf("\n the deleted element is %d\n",queue[front]);
	front=-1;
	rear=-1;	
	}
	else
	{
		printf("\n the deleted element is %d",queue[front]);
		front=front+1;
	}
}
void display()
{
	int i=front;
	if(front==-1&&rear==-1)
	{
		printf("\n  queue is empty");
	}
	else{
		printf("\n elements in a queue are:\n");
		while(i<=rear)
		{
		  printf("%d\n",queue[i]);
			i=i+1;
		}
	    }
}


