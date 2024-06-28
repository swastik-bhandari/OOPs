#include<stdio.h>
#include<math.h>
int t=5;
void prime(void);
int main ()
{
prime();
return 0;
}
void prime ()
{
for (int i=2 ; i<=100 ; i++)
{
int a =1;
for(int j =2; j<=sqrt(i) ;j++)
{
if (i%j==0)
{
a=0;
break;
}
}
if (a==1)
printf("%d",i);
}
}



