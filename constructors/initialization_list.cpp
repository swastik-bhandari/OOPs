#include<iostream>
using namespace std;
class test {
int num1 ;
int num2 ;
public:
test (int x , int y):num2(y),num1(num2+x)
{
cout<<num1<<endl;
cout<<num2<<endl;
}
};
int main ()
{
test t(1,2);
return 0;
}
