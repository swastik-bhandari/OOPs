#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////
template<class T>
class animal {
protected:
T legs;
public:
animal(T x):legs(x){}
};
///////////////////////////////////////////////////////////////////////////////////////////
template<typename T1 , class T>
class human :public animal<T1>{
T iq;
public:
human(T1 x , T y):animal<T1>(x){
iq=x;
}
void getData(void)
{
cout<<iq<<endl;
cout<<animal<T1>::legs<<endl; // to access the members of the base class in derived class, you have to use this syntax .
//but leg is protected in base class , why i am not able to access directly 
}
};
int main ()
{
human <int , float> h(4,169);
h.getData();
return 0;
}

