#include<stdio.h>
int main ()
{ 
char a[100];
int c = 0 , i=0;
scanf("%[^t]",&a);
while(a[i]!='\0')
{
if ( a[i]==' ')
{
i++;
continue;
}
else
{
i++;
c++;
}}
printf("the length is %d",c);
return 0;
}
