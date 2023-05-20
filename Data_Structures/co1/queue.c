#include<stdio.h>
#define N 5
void enqueue();
void dequeue();
void top();
void display();
int n,c;
int queue[N];
int rear=-1,front=-1;
void main()
{
do{
   printf("enter choice\n 1:enqueue\n 2:dequeue\n 3:top\n 4:display\n");
   scanf("%d", &c);
 switch(c)
  {
   case 1: enqueue(); break;
   case 2: dequeue(); break;
   case 3: top(); break;
   case 4: display(); break;
   default: printf("wrong choice"); break;
  }
  }
while(c!=0);
}
void enqueue()
{
int data;
printf("enter the data\n");
scanf("%d",&data);
if(rear==N-1)
 {
printf("queue is full");
 }
else if (front==-1 && rear==-1)
 {
front=rear=0;
queue[rear]=data;
 }
else{
rear++;
queue[rear]=data;
    }
}
void dequeue()
{
if(front==-1 && rear==-1)
  {
   printf("underflow");
  }
else if (front==rear)
 {
  front=rear=-1;
 }
else{
     printf("element dequeue: %d \n",queue[front]);
     front++;
    }
}
void top()
{
 rear==-1;
 if(front==-1 && rear==-1)
  {
   printf("queue is empty");
  }
 else{
    printf("top element:%d\n",queue[rear]);
     }
}
void display()
{
int i;
 if(front==-1 && rear==-1)
  {
   printf("queue is empty");
  }
 else{
  for (i=front;i<=rear;i++)
  printf("%d\n",queue[i]);
    }
}


