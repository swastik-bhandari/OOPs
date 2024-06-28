// pre and post decrement -swastik bhandari
#include<iostream>
using namespace std;
class complex
{
int real;
int img ; 
public :
friend void operator--(complex &);
friend void operator--(complex & , int);
complex(){}
complex(int real , int img)
{
this->real=real;
this->img=img;
}
void display(void)
{
cout<<real<<"+"<<img<<"i"<<endl;
}
};
void operator--(complex &c)
{
c.real=c.real-1;
c.img=c.img-1;
}
void operator--(complex &c , int)
{
c.real=c.real-1;
c.img=c.img-1;
}
int main ()
{
complex c;
c=complex(3,2);
c--;
--c;
c.display();
return 0;
}
