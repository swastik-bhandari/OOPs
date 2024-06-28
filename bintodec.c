#include<stdio.h>
#include<string.h>
#include<math.h>
void dec(int , char[]);
int main ()
{
char bits[20];
printf("enter the bits \v");
scanf("%s",bits);
int length=strlen(bits);
dec(length , bits);
return 0;
}
void dec(int length , char bi	])
{int sum=0;
for(int i=0; i<length ; i++)
{
sum+=(bits[i]-48)*pow(2 , length-i-1);
}
printf("the decimal value is %d",sum);
}


