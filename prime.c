#include<stdio.h>
#include<math.h>
int main()
{
int n, i=5;
int a=0;
scanf("%d",&n);
for (i=2 ; i<=sqrt(n) ; i++)
{
if (n%i==0)
{
printf("not prime");
a =1;
break;
}
}
printf("%d",i);
if(a==0)
{
printf("prime");
}
return 0;
}
// also try #define i 1 
