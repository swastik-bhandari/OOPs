#include<iostream>
using namespace std;
template<class T1=int , class T2=int , class T3=string>
class animal {
T1 age;
T2 legs;
T3 name;
public:
animal(){}
animal(T1 x , T2 y , T3 z):age(x),legs(y),name(z){}
void display(void)
{
cout<<"name:"+name<<endl<<"age:"<<age<<endl<<"legs:"<<legs<<endl;
}
};
int main ()
{
animal <> a(25,4,"cow");
animal <float>b(34.5,4,"horse");
animal <>c;
c=animal<>(23,2,"samir");
a.display();
b.display();
c.display();
return 0;
}

