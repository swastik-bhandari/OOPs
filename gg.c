#include<stdio.h>
#include<limits.h>
int sort(float[] ,int);
int main ()
{
int n;
float a[100];
printf("enter the number that you want to sort\n");
scanf("%d",&n);
for(int i=0 ; i<n ; i++)
{
scanf("%f",&a[i]);
}
sort(a , n);
return 0;
}
int sort(float *ptr , int t)
{
int x=t;
while(t!=1)
{
for (int i=0 ; i<t-1; i++)
{
if (*(ptr+i)>*(ptr+i+1))
{
float temp=*(ptr+i) ;
*(ptr+i)=*(ptr+i+1);
*(ptr+i+1)=temp;
}}
t--;
}
for(int i=0 ; i<x ; i++)
{
printf("%f\n",*(ptr+i));
}
return 0;
}




