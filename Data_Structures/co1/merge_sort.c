#include<stdio.h>
#define N 5
int a[N];
void merge(int arr[],int p,int q,int r)
{
int n1=q-p+1;
int n2=r-q;
int L[n1],R[n2];
for(int i=0;i<n1;i++)
{
L[i]=arr[p+i];
}
for(int j=0;j<n2;j++)
{
R[j]=arr[q+1+j];
}
int i=0,j=0,k;
k=p;
while(i<n1&&j<n2)
{
if(L[i]<=R[j])
{
arr[k]=L[i];
i++;
}
else
{
arr[k]=R[j];
j++;
}
k++;
}
while(i<n1)
{
arr[k]=L[i];
i++;
k++;
}
while(j<n2)
{
arr[k]=R[j];
j++;
k++;
}
}
void mergesort(int arr[],int l,int r)
{
if(l<r)
{
int m=l+(r-l)/2;
mergesort(arr,l,m);
mergesort(arr,m+1,r);
merge(arr,l,m,r);
}
}
void display(int arr[],int size)
{
for(int i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
}
void main()
{
int i;
printf("Enter the elements:");
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
printf("Unsorted array elements:");
for(i=0;i<N;i++)
{
printf("%d\t",a[i]);
}
printf("\nSorted array elements:-\t");
mergesort(a,0,N-1);
display(a,N);
}
	

