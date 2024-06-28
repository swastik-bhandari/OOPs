#include<iostream>
using namespace std;
class real {
public:
int num1;
int num3;
real(){
cout<<"base class constructor is called"<<endl;
}
real(int num1)
{
cout<<"parameterized base class constructor is called "<<endl;
}
};
class img: public real{
public:
int num2;
img(){}
img(int num2)
{
this->num2=num2;
}
void display(void)
{
cout<<num3<<endl<<num2<<endl;
}
};
int main ()
{
img i;
real *ptr;
ptr=&i;
ptr->num3=6;
ptr->num1=3;
((img *)ptr)->num2=5;
i.display();
return 0;
}



