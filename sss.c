#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
char a[20];
int n ;
scanf("%d",&n);
for (int i=0 ; i<n ; i++)
{
scanf(" %c",&a[i]);
}
int l=strlen(a);
printf("%d",l);
int sum=0;
for (int i=0 ; i<l ; i++)
{
sum+=(a[i]-48)*pow(2,l-i-1);
}
printf("the equivalent decimal is %d", sum);
return 0;
}

