#include<iostream>
using namespace std;
class number {
int num1 ;
int num2;
public:
void set_data(int n1 , int n2)
{
num1=n1;
num2=n2;
}
void get_data(void)
{
cout<<num1+num2<<endl;
}
};
void complex (number s1 , number s2)
{
s1.set_data(2,1);
}

int main ()
{
number s1 ,s2;
s1.set_data(3,5);
s2.set_data(6,7);
s1.get_data();
s2.get_data();
s1.get_data();

return 0;
}
