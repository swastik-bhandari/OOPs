// virtual base class is used to solve ambiguity . 
#include<iostream>
using namespace std;
class A {
public:
int a ; 
};
class B : virtual public A {
public:
};
class C :virtual public A {
public:
};
class D : public B , public C {
};
int main ()
{
D d;
d.a=5;
cout<<d.a;
return 0;
}
