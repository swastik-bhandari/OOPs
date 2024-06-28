#include<stdio.h>
void avg(int[] , int );
int main ()
{
int n ;
printf("enter the index of the array\v");
scanf("%d",&n);
int a[n];
for (int i= 0 ; i<n ; i++)
{
scanf("%d",&a[i]);
}
avg(a , n);
return 0;
}
void avg(int a[] , int n) 
{
int sum=0;
for(int i=0 ; i<n ; i++)
{
sum+=a[i];
}
printf("the average of the numbers is %f",(float)sum/n);
}

