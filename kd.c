#include<stdio.h>
struct student
{
int rollno;
char name[20];
};
int main ()
{
struct student s[5];
printf("enter name and rollno of 5 students");
for (int i=0; i<5 ; i++)
{
scanf("%s%d",s[i].name,&s[i].rollno);
}
int a=5;
while(a!=1)
{
for (int i=0; i<a-1; i++)
{
if (s[i].rollno>s[i+1].rollno)
{
struct student temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}}
a--;
}
for(int i=0;i<5;i++)
{
printf("name of %d student is %s",i+1, s[i].name);
printf("rollno of %d student is %d", i+1, s[i].rollno);
}
return 0;
}
