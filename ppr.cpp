#include<iostream>
using namespace std;
class base1 {
protected:
int num1;
public:
base1(int x)
{
num1=x;
}
};
class base2 {
protected:
int num2;
public:
base2(int x)
{
num2=x;
}
};
class derived : public base1 , public base2 {
protected:
int num3;
public:
derived (int x , int y , int z):base1(x),base2(y)
{
num3=z;
}
void display (void)
{
cout<<num1<<endl;
cout<<num2<<endl;
cout<<num3<<endl;
}
};

int main ()
{
derived d(1,2,3);
d.display();
return 0;
}

