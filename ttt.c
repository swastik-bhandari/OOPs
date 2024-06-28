#include<stdio.h>
struct student 
{
int a ; 
char b[20];
};
int main ()
{
struct student s ;
printf("%d",sizeof (s));
return 0;
}

