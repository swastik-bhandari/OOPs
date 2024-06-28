#include<iostream>
using namespace std ;
class student 
{
public:
void func();
void func(int x);
void func(double);
};
int main ()
{
student a ;
a.func();
a.func(2);
a.func(2.34);
return 0;
}

void student::func()
{
cout<<"first call";
}
void student::func(int x)
{
cout<<"second call ";
}
void student:: func(double x)
{
cout<<"third call ";
}


