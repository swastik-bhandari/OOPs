#include<iostream>
using namespace std;
void modify(int &);
int main ()
{
int a =5;
cout<<&a<<endl;
cout<<a<<endl;
modify(a);
cout<<a<<"\n";
return 0;
}
void modify(int &x)
{
x+=5;
cout<<&x;
cout<<x<<endl;
}
