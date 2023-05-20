#include<stdio.h>
# define N 5
void topp();
void push();
void pop();
void display();
int top=-1 ;
int stack[N];
void main()
{
 int c;
do
  {
   printf("enter choice\n 1:push\n 2:pop\n 3:top\n 4:display\n");
   scanf("%d", &c);
   switch (c)
   {
    case 1:
          push(); break;
    case 2:
           pop(); break;      
    case 3:  
          topp(); break; 
    case 4: 
          display(); break;
    default: printf("default choice");
   }
  }
while (c!=0);
}
void push()
 {
  int x;
  printf ("enter data");
  scanf ("%d",&x);
    if(top==N-1)
     {
       printf("overflow");
     }
    else
     {
       top++;
       stack[top]=x;
     }
 }
void pop()
 {
  int item;
   if(top==-1)
    printf("underflow");
   else
    {
     item=stack[top];
     top--;
     printf("%d\n, poped item",item);
    }
 }
void topp()
 {
  if(top==-1)
    printf("stack is empty");
  else
    printf("%d\n",stack[top]);
 }
void display()
 {
  int i;
   for(i=top;i>=0;i--)
    printf("%d\n", stack[i]);
 }

