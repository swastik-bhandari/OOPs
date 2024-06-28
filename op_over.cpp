#include<iostream>
using namespace std;
class complex 
{
int rel;
int img;
public:
complex()
{
rel=0;
img=0;
}
complex(int x, int y)
{
rel = x;
img = y;
}
void display()
{
cout<<rel<<"+"<<img<<"i";
}
//operator overloading syntax:
complex operator+(complex b)
{
complex temp;
temp.rel=rel+b.rel;
temp.img=img+b.img;
return temp;
}
};

int main ()
{
complex a(2 , 6);
complex b(4 , 3);
complex c;
c=a+b;    //   a.add(b)
c.display();
return 0;
}
