#include<iostream>
using namespace std;
class base1 {
int num1;
public :
base1 (int x)
{
num1=x;
cout<<num1;
}
};
class base2 {
int num2 ;
public :
base2 (int y)
{
num2=y;
cout<<num2;
}
};
class derived : public base1 , public base2 {
int num3;
int num4;
public:
derived (int a, int b , int c , int d):base1(a),base2(b){
num3=c;
num4=d;
cout<<num3<<num4;
}

};
int main ()
{
derived d(1,2,3,4);
return 0;
}

