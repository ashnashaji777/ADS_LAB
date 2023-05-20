#include<stdio.h>
#include<stdlib.h>
void creation();
void display();
void search();
void traverse();
void insertbeg();
//void insertrandom();
void insertend();
void deletebeg();
//void deleterandom();
void deleteend();
int a,i,n;
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head, *newnode, *current, *nptr;
void main()
{
do
{
printf("\nenter choice\n 1:creation\n 2:display\n 3:search\n 4:traverse\n 5:insert beginning\n 6:insert random\n 7:insert end\n 8:delete beg\n 9:delete random\n 10:delete end\n");
scanf("%d",&a);
switch(a)
{
case 1: creation();break;
case 2: display();break;
case 3: search();break;
case 4: traverse();break;
case 5: insertbeg();break;
//case 6: insertrandom();break;
case 7: insertend();break;
case 8: deletebeg();break;
//case 9: deleterandom();break;
case 10: deleteend();break;
default :printf("default choice\n");break;
}
}while(a!=0);
}
void insertbeg()
{
struct node *newnode, *temp;
int item;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("overflow");
}
else{
printf("\nenter the node data:");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
head=newnode;
newnode->next=head;
}
else{
temp=head;
while(temp->next!=head)
temp=temp->next;
newnode->next=head;
temp->next=newnode;
head=newnode;
}
printf("\nnode inserted");
}
}
void insertend()
{
struct node *newnode, *temp;
int item;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("overflow");
}
else{
printf("\nenter the node data:");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
printf("overflow");
}
else{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
}
printf("\nnode inserted");
}
}
void deletebeg()
{
struct node *ptr;
if(head==NULL)
{
printf("underflow");
}
else{
ptr=head;
while(ptr->next!=head)
ptr=ptr->next;
ptr->next=head->next;
free(head);
head=ptr->next;
printf("\nnode deleted");
}
}
void deleteend()
{
struct node *ptr,*preptr;
if(head==NULL)
{
printf("underflow");
}
else if(head->next==head)
{
head=NULL;
free(head);
printf("\nnode deleted");
}
else
{
ptr=head;
while(ptr->next!=head)
preptr=ptr;
ptr=ptr->next;
}
preptr->next=ptr->next;
free(ptr);
printf("\nnode deleted");
}
void search()
{
struct node *current;
int item,count=1;
if(head==NULL)
{
printf("the cl list is empty");
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
void creation()
{
printf("enter the number of value to be inserted:");
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
current=newnode;

}
}
}
void display()
{
printf("linked list:\n");
if(head==NULL)
{
printf("the linked list is empty");
}
for(current=head;current!=NULL;current=current->next)
{
printf("%d->",current->data);
}
}









  
