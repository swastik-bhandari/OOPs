#include<iostream>
using namespace std;
class baseclass {
public:
int a ;
void display()
{
cout<<"base class"<<a;
}
};
class derivedclass : public baseclass{
public:
int b;
void display()
{
cout<<"derived class hahaha" << a;
cout<<"derived class"<<b;
}
};
int main ()
{
baseclass *ptr1;
derivedclass obj;
ptr1=&obj;
ptr1->a=25;
ptr1->display();
return 0;
}


