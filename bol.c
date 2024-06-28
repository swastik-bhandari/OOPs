#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main ()
{
int n;
scanf("%d",&n);
bool a[n] ;
for (int i=0 ; i<n ; i++)
{
scanf("%d",&a[i]);
}
int sum=0;
for (int i=0 ; i<n ; i++)
{
sum+=a[i]*pow(2,n-i-1);
}
printf("the equivalent decimal number is %d",sum);
return 0;
}
