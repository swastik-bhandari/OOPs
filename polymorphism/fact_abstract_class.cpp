#include<iostream>
using namespace std;
class animal { // abstract base class 
public:
virtual void makesound(void)=0;// pure virtual function
};
class mammal: public animal{ 
public:
};// as it does not implement makesound , so this class remains abstract . it is abstract derived class .
class dog:public animal{
//implementation of pure virtual function .
void makesound(void) override 
{
cout<<"bark"<<endl;
}
};
int main ()
{
dog d;
animal *ptr=&d;
ptr->makesound();
return 0;
}
