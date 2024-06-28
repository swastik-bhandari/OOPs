#include<iostream>
using namespace std;
class superclass {
int num1;
public:
superclass(){}
superclass(int x):num1(x){}
virtual void display(void)
{
cout<<"superclass constructor is invoked"<<num1<<endl;
}
};
class subclass : public superclass{
int num2;
public:
subclass(){}
subclass(int x):num2(x){}
void display(void)
{
cout<<"subclass constructor is invoked "<<num2<<endl;
}
};
int main ()
{
subclass c(4);
superclass *ptr;
ptr=&c;
//((subclass *)ptr)->display();
ptr->display();
return 0;
}

