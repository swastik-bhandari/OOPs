#include<iostream>
using namespace std;
class number{
int num1;
int num2;
public:
number (void)
{

}
number (int, int);
void display(void);
};
number :: number(int x, int y)
{
num1=x;
num2=y;
}
void number :: display(void)
{
cout<<num1<<endl;
cout<<num2<<endl;
}
int main ()
{
//number n;
//n=number(4,5); //working 
number(4,5).display(); // no working 

return 0;
}
