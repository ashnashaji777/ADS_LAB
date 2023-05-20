#include<stdio.h>
#include<stdlib.h>
void creation();
void display();
void search();
void traverse();
void insertbeg();
void insertmidd();
void insertend();
void deletebeg();
void deletemidd();
void deleteend();
int i,n,a;
struct node
{
int data;
struct node*prev;
struct node*next;
};
struct node *newnode, *current, *temp, *nptr, *head=NULL;
void main()
{
do
{
printf("\nenter choice\n 1:creation\n 2:display\n 3:search\n 4:traverse\n 5:insert beginning\n 6:insert middle\n 7:insert end\n 8:delete beg\n 9:delete midd\n 10:delete end\n");
scanf("%d",&a);
switch(a)
{
case 1: creation();break;
case 2: display();break;
case 3: search();break;
case 4: traverse();break;
case 5: insertbeg();break;
case 6: insertmidd();break;
case 7: insertend();break;
case 8: deletebeg();break;
case 9: deletemidd();break;
case 10: deleteend();break;
default :printf("default choice\n");break;
}
}while(a!=0);
}
void creation()
{
printf("enter the number of value to be inserted\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the value:");
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d->",&newnode->data);
if(head==NULL)
{
head=newnode;
current=newnode;
}
else
{
current->next=newnode;
newnode->prev=current;
current=newnode;
}
}
}
void search()
{
int item,count=1;
if(head==NULL)
{
printf("the linked list is empty");
}
printf("enter the item to be searched:\n");
scanf("%d",&item);
for(current=head;current->data!=item;current=current->next)
{
count++;
}
if(current->data==item)
{
printf("item is found at the %d doubly linked list",count);
}
else
{
printf("the element is not found");
}
}
void insertbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to be inserted:");
scanf("%d->",&newnode->data);
newnode->prev=NULL;
newnode->next=head;
head=newnode;
}
void insertmidd()
{
int item;
struct node *ptr;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to be inserted:");
scanf("%d->",&newnode->data);
printf("enter the item where you have to insert the data:");
scanf("%d",&item);
if(head==NULL)
{
head=newnode;
newnode->next=NULL;
newnode->prev=NULL;
}
else
{
ptr=head;
while(ptr->data!=item)
{
ptr=ptr->next;
}
newnode->next=ptr->next;
newnode->prev=ptr;
ptr->next=newnode;
}
}
void insertend()
{
int item;
struct node *ptr;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to be inserted:");
scanf("%d->",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
newnode->prev=NULL;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
newnode->prev=ptr;
ptr->next=newnode;
}
}
void deletebeg()
{
struct node *ptr;
if(head==NULL)
{
printf("underflow");
}
else
{
ptr=head;
head=head->next;
head->prev=NULL;
free(ptr);
}
}
void deletemidd()
{
int item;
struct node *ptr;
if(head==NULL)
{
printf("underflow");
}
else
{
ptr=head;
printf("enter the item before the item you wish to delete:\n");
scanf("%d",&item);
while(ptr->data!=item)
{
	
	ptr=ptr->next;
}
temp=ptr->next;
ptr->next=temp->next;
temp->next->prev=ptr;
free(temp);
}
}
void deleteend()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("underflow");
		}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
		
			ptr=ptr->next;
		}
	
                  ptr->prev->next=NULL;
                  free(ptr);
		}	
}
void display()
{
	struct node *current;
	printf("doubly linked list:\n");
	if(head==NULL)
	{
		printf("the linked list is empty");
	}
	for(current=head;current!=NULL;current=current->next)
	{
	 printf("%d->",current->data);
	}
	printf("null");
}
void traverse()
{
	int q=0;
	nptr;
	nptr=head;
	while(nptr!=NULL)
	{
		nptr=nptr->next;
		q++;
	}
	printf("count=%d",q);
}







