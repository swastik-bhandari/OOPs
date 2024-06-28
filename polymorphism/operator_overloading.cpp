
#include<iostream>
using namespace std;
class complex {
public:
int real;
int img;
public:
complex(){}
complex(int x, int y)
{
real=x;
img=y;
}
void display(void)
{
if(img>0)
cout<<real<<"+"<<img<<"i"<<endl;
else
cout<<real<<img<<"i"<<endl;
}
};
//If A and B are objects of the same class, then within a method of A ,you can access the private members of B, if B is passed as an argument to that method. This is because member functions of a class have access to private members of any object of that class. 
complex operator+(complex &m, complex &n)
{
complex t;
t.real=n.real+m.real;
t.img=n.img+m.img;
return t;
}
complex operator-(complex &m, complex &n)
{
complex t;
t.real=m.real-n.real;
t.img=m.img-n.img;
return t;
}
int main ()
{
complex c1 , c2, c3;
c1=complex(2,3);
c2=complex(4,5);
c3=c1+c2; // The overloaded + operator is called with c1 as the calling object and c2 as the argument.
complex c4=c1-c2;
c3.display();
c4.display();
return 0;
}


