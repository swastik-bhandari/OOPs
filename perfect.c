#include<stdio.h>
int per(int);
#include<math.h>
int main()
{
int n , c ;
scanf("%d",&n);
c= per(n);
if (c== n)
printf("it is a perfect number ");
else
printf("not a perfect number");
return 0;
}
per(int n)
{
int sum =1 , b, i;
for (i = 2 ; i<=sqrt(n); i++)
{
if (n%i==0)
{
b=n/i;
sum=sum +b+i ;

}}
return sum ;
}
