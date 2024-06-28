/*a.greet()
This is the typical way to call a member function of an object. When you use a.greet(), the compiler looks for the greet method in the animal class or any of its base classes (if animal had any). If greet is overridden in a derived class, the overridden version will be called.

a.animal::greet()
This explicitly calls the greet method from the animal class, bypassing any overridden versions of greet that might exist in derived classes. This syntax is used when you want to ensure that the base class version of the function is called, even if the function is overridden in a derived class.*/
#include<iostream>
using namespace std;
class animal {
int legs;
int horn;
public:
animal(int x , int y ):legs(x),horn(y){}
void Display(void)
{
cout<<"legs:"<<legs<<endl;
cout<<"horn:"<<horn<<endl;
}
void greet (void)
{
cout<<"hello swastik"<<endl;
}
};
int main ()
{
animal a(4,2);
a.animal::greet();
a.greet();
return 0;
}
