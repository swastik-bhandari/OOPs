#include<iostream>
using namespace std;
template<class T>
class rectangle {
T num1;
T num2;
public:
void setData(T num1 , T num2)
{
this->num1=num1;
this->num2=num2;
}
void getData(void)
{
cout<<num1+num2<<endl;
}
};
class circle {
int  radius;

public:
void setData(int x)
{
radius=x;
}
void getData(void)
{
cout<<2*3.14*radius<<endl;
}
};
int main ()
{
rectangle <int> r;
r.setData(3.21,4.52);
r.getData();
circle c;
c.setData(5);
c.getData();
return 0;
}
