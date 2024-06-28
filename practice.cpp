#include<iostream>
using namespace std;
class base{
int data1 ;
public:
int data2;
void setdata1(int);
void setdata2(int);
};
class derived:public base{
int data3;
public:
void process(void);
void display(void);
};
int main ()
{
derived dev;
dev.setdata1(2);
dev.setdata2(3);
dev.process();
dev.display();
return 0;
}
void base :: setdata1(int x)
{
data1=x;
}
void base :: setdata2(int x)
{
data2=x;
}
void derived :: process (void)
{
data3=data2*3;
}
void derived :: display(void)
{
cout<<data3;
}


