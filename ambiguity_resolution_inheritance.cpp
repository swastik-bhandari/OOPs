#include<iostream>
using namespace std;
class base1{
public:
void greet(void)
{
cout<<"hello swastik"<<endl;
}
};
class base2{
public:
void greet(void)
{
cout<<"hey sandesh"<<endl;
}
};
class derived : public base1 , public base2 {
int a;
public:
void  greet(void)
{
base1::greet();
/*void greet(void)
{
cout<<"whats up"<<endl; 
*/
}

};


class B {
public:
void text(void){
cout<<"what are you doing swastik ?"<<endl;
}
};
class D : public B {
public:
void text(void){
cout<<"how do you do ?"<<endl;
}
};



int main ()
{
base1 base1_obj ;
base1_obj.greet();
base2 base2_obj;
base2_obj.greet();
derived d;
d.greet();
/*B B_obj;
D D_obj;
B_obj.text();
D_obj.text();*/
return 0;
}
//


