#include<iostream>
using std::cout;
using std::cin;
template<class T>
void swap(T &x , T &y)
{
T z;
z=x;
x=y;
y=z;
}
int main ()
{
char x , y;
cin>>x>> y;
swap(x,y);
cout<<x<<y;
return 0;
}
