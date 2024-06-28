#include<iostream>
using namespace std;
class A
{
public:
int a , b;
};
class B:public A{
public:
};
int main ()
{
B b1;
cin>>b1.a;
cin>>b1.b;
cout<<b1.a <<endl<<b1.b;
return 0;
}
