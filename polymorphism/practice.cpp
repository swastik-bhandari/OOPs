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
cout<<real<<"+"<<img<<"i"<<endl;
}
};
complex operator+(complex &m , complex n)
{
complex t;
t.real=n.real+m.real;
t.img=n.img+m.img;
return t;
}
int main ()
{
complex c1 , c2, c3;
c1=complex(2,3);
c2=complex(4,5);
c3=c1+c2; 
c3.display();
return 0;
}


