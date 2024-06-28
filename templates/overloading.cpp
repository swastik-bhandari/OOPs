#include<iostream>
using namespace std;
template<class T>
void func(T t)
{
cout<<"templatized function"<<t;
}
void func (int t)
{
cout<<"normal function"<<t;
}
int main ()
{
func(5);
cout<<endl;
func(4.3);
return 0;
}
