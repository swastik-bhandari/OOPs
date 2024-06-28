#include<iostream>
using namespace std; 
class student
{
public:
int c;
 student(int x)
{
c=x*5;
}
student( student dummy)
{
c=dummy.c;
}
student()
{
c=0;
}

};
int main ()
{
student a(5);
student b(a); // copy constructor invoked 
student b1=a; // copy constructor invoked 
student d;
cout<< a.c;
cout<<b.c;
cout<<d.c;
cout<<b1.c;
return 0;
}







