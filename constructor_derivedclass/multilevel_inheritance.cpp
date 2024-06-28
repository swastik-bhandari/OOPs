#include<iostream>
using namespace std;
class base {
protected:
int num1;
int num2;
public:
base(){}
base(int x , int y){
num1=x;
num2=y;
}
};
class derived1 :public base {
protected:
int num3;
public:
derived1(){}
derived1(int x , int y , int z):base(x,y){
num3=z;
}
};
class derived2 : public derived1{
protected:
int num4;
public:
derived2(){}
derived2(int p , int q , int r , int s):derived1(p, q , r){
num4=s;
}
void display(void)
{
cout<<num1<<num2<<num3<<num4<<endl;
}
};
int main ()
{
derived2 d;
d=derived2(1,2,3,4);
return 0;
}

