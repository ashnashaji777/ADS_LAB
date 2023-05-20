#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *rear=NULL,*front=NULL,*temp;
void enqueue()
{
int item;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the item:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(front==NULL)
{
front=rear=newnode;
}
else
{
rear->next=newnode;
rear=newnode;
}
}
void dequeue()
{
if(front==NULL)
{
front=temp;
printf("Underflow");
}
else if(front==rear)
{
printf("The deleted element is %d",front->data);
free(front);
front=rear=NULL;
}
else
{
printf("The deleted element is %d",front->data);
front=front->next;
free(temp);
}
}
void top()
{
if(front==NULL)
{
printf("Queue is empty");
}
else
{
printf("Top element is %d",front->data);
}
}
void display()
{
if(front==NULL)
{
printf("Queue is empty");
}
else
{
struct node *temp;
for(temp=front;temp!=NULL;temp=temp->next)
{
printf("%d->",temp->data);
}
printf("NULL");
}
}
void main()
{
int c;
do
{
printf("\nEnter choice\n1.enqueue\n2.dequeue\n3.top\n4.display\n0.exit\n");
scanf("%d",&c);
switch(c)
{
case 1:enqueue();break;
case 2:dequeue();break;
case 3:top();break;
case 4:display();break;
case 5:printf("Exit");break;
default:printf("Invalid");
}
}while(c!=0);
}
