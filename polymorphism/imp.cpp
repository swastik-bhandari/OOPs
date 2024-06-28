#include<iostream>
using namespace std;
class base {
private:
int num1 ;
};
class derived : public base{
public:
int num2;
};
int main()
{
derived d;
cout<<sizeof(int)<<endl;
cout<<sizeof(d); // if private member are not inherited , why 'd' is of 8 bytes ?
return 0;
}