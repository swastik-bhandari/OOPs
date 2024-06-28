#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main()
{
unsigned int n ;
printf("enter a number \v");
scanf("%u" ,&n);
int c=fact(n);
printf("the factorial of the number is %d", c);
return 0;
}
int fact(int n )
{
static int t=120;
if (n==0)
return 1;
else if (n<0)
{
printf("enter a positive number");
exit(1);
}
else 
{
int p=fact(n-1);
if (t==p)
{
printf("error");
exit(1);
}
return (n*p);
}
}
