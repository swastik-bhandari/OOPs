#include<stdio.h>
int gcd(int , int );
int main ()
{
 int a ,b;
printf("enter number");
scanf("%d%d",&a ,&b);
int c = gcd(a ,b);
printf("the gcd is %d",c );
return 0;
}
int gcd (int a , int b)
{
if (a==b) 
{
return a;
}
else if (a>b)
{
return (gcd(a-b , b));
}
else
{
return (gcd(a, b-a ));
}
}
