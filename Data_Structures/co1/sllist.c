#include<stdio.h>
#include<stdlib.h>
void creation();
void display();
void search();
void traverse();
void addend();
void addmidd();
void addbeg();
void deleteend();
void deletemidd();
void deletebeg();
int i,n,a;
struct node
{
int data;
struct node*next;
};
struct node *newnode, *current, *temp, *nptr, *head=NULL;
void main()
{
do
{
printf("enter the choice\n 1:insertion\n 2:display\n 3:searching\n 4:traverse\n 5:addition at end\n 6:addition after a given node\n 7:addition at beginning\n 8:deletion at end\n 9:deletion after a given node\n 10:deletion at the beginning\n 0:exit\n");
scanf("%d",&a);
switch(a)
{
case 1: creation();break;
case 2: display();break;
case 3: search();break;
case 4: traverse();break;
case 5: addend();break;
case 6: addmidd();break;
case 7: addbeg();break;
case 8: deleteend();break;
case 9: deletemidd();break;
case 10: deletebeg();break;
default :printf("default choice\n");break;
}
}while(a!=0);
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
printf("null\n");
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
printf("item is found at the %d linked list",count);
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
void addend()
{
int item;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to be added:");
scanf("%d->",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else
{
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=newnode;
}
}
void addmidd()
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
}
else
{
ptr=head;
while(ptr->data!=item)
{
ptr=ptr->next;
}
newnode->next=ptr->next;
ptr->next=newnode;
}
}
void addbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to be inserted:");
scanf("%d->",&newnode->data);
newnode->next=head;
head=newnode;
}
void deleteend()
{
struct node *preptr, *ptr;
if(head==NULL)
{
printf("underflow");
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=NULL;
free(ptr);
}
}
void deletemidd()
{
int item;
struct node *preptr, *ptr;
if(head==NULL)
{
printf("underflow");
}
else
{
ptr=head;
preptr=ptr;
printf("enter the item before the item you wish to delete:\n");
scanf("%d",&item);
while(preptr->data!=item)
{
preptr=ptr;
ptr=ptr->next;
}
temp=ptr;preptr->next=ptr->next;
free(temp);
}
}
void deletebeg()
{
if(head==NULL)
{
printf("underflow");
}
else
{
struct node *preptr, *ptr;
ptr=head;
preptr=ptr;
ptr=ptr->next;
free(preptr);
head=ptr;
}
}

