#include<stdio.h>
#include<stdlib.h>
struct student 
{
char name[20];
int age ;
int roll_num;
};
int main ()
{
struct student a[5];
printf("enter the info of 5 students\n");
for (int i=0 ; i<5 ; i++)
{
printf("enter the name of student ");
scanf("%s",&a[i].name);
printf("enter the age of student");
scanf("%d",&a[i].age);
printf("enter the roll_num of student ");
scanf("%d",&a[i].roll_num);
system("clear");
}
int x;
x=5;
while(x!=1)
{
for (int i=0 ; i<x-1 ; i++)
{
if(a[i].roll_num>a[i+1].roll_num)
{
struct student temp ;
temp= a[i];
a[i]=a[i+1];
a[i+1]= temp;
}
}
x--;
}
for (int i=0 ; i<5 ; i++)
{
printf("the name of student %s\n",a[i].name);
printf("the age of student %d\n",a[i].age);
printf("the roll_num of student %d\n" ,a[i].roll_num);
}
return 0;
}



