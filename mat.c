#include<stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0 ; i<n; i++)
{
scanf("%d",&a[i]);
}
int b=n;
while(b!=1)
{
for (int i=0 ; i<b-1 ; i++)
{
if(a[i]>a[i+1])
{
int temp = a[i];
a[i]=a[i+1];
a[i+1]=temp;
}}
b--;
}
for(int i=0 ; i<n; i++)
{
printf("%d\n",a[i]);
}
return 0;
}

