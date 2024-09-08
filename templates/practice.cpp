#include<iostream>
using namespace std;
template<typename T=int>
class animal {
public:
T legs;
public:
animal(T x) : legs(x) {}
virtual void display(void) {
cout<<legs;
}
};
template<typename T , typename T1>
class human : public animal<T> {
T1 iq;
public:
human(T x, T1 y) : animal<T>(x) , iq(y) {}
void display(void)
{
cout<<animal<T>::legs;
cout<<iq;
}
};
int main ()
{
animal<int> *ptr;
human<int , double> h(2,127);
ptr=&h;
human<int, double> *hptr;
hptr=dynamic_cast<human<int , double>* >(ptr);
hptr->display();
return 0;
}
