#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
int a , b;
string name ;
student (int , int, string);
};

int main ()
{
student st1(5 , 6 , "bhandari");
cout<<st1.name;
cout<< st1.a;
cout<< st1.b;

return 0;
}
student ::student(int y ,int x, string n )
{
a=y ;
b=x;
name = n;
}

