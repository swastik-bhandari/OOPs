#include<iostream>
using namespace std;
template<typename T>
void func(T x)
{
cout<<"template function call"<<endl;
cout<<x;
}
void func(float x)
{
cout<<"non template function call"<<endl;
cout<<x;
}
int main ()
{
func(5.04f);
return 0;
}
