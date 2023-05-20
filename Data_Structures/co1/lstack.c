#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void push()
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
int data;
printf("Enter the data:");
scanf("%d",&data);
newnode->data=data;
newnode->next=top;
top=newnode;
}
void pop()
{
struct node *temp=top;
if(temp==NULL)
	
{
printf("Underflow");
}
else
{
top=top->next;
printf("The deleted element is %d",temp->data);
free(temp);
}
}
void Top()
{
if(top==NULL)
{
printf("Stack is empty");
}
else
{
printf("The top element is %d",top->data);
}
}
void display()
{
struct node *temp=top;
if(top==NULL)
{
printf("Stack is empty");
}
else
{
for(temp=top;temp!=NULL;temp=temp->next)
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
printf("\nEnter choice\n 1.push\n2.pop\n3.top\n4.display\n0.exit:");
scanf("%d",&c);
switch(c)
{
case 1:push();break;
case 2:pop();break;
case 3:Top();break;
case 4:display();break;
case 0:printf("Exit");break;
default:printf("\nInvalid");
}
}while(c!=0);
}




