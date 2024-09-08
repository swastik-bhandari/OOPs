#include<iostream>
using namespace std;
template<typename T>
class animal {
protected:
T legs;
public:
animal(T legs)
{
this->legs=legs;
}
};
template<typename T , typename T1>
class dolphin:public animal<T>{
protected:
T1 iq;
public:
dolphin(T x , T1 y):animal<T>(x){
iq=y;
}
void display(void)
{
cout<<animal<T>::legs<<endl;
cout<<iq<<endl;
}
};
int main ()
{
dolphin<int , float>d(4,123.4);
d.display();
return 0;
}

