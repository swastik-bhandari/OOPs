#include<iostream>
using namespace std;
class A
{
public:
int b ;
void setdata(int b)
{
this->b=b;
}
void getdata()
{
cout<<" the value is "<<b;
}
};
int main ()
{
A a;
a.setdata(5);
a.getdata();
return 0;
}
