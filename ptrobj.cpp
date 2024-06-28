#include<iostream>
using namespace std;
class complex
{
int imag , real;
public:
void input()
{
cin>>real;
cin>>imag;
}
void display()
{
cout<<real<<"+"<<imag<<"i";
}
};
int main ()
{
complex *ptr= new complex ;
(*ptr).input();
(*ptr).display();
return 0;
}



