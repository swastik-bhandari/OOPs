#include<iostream>
using namespace std;
class animal {
int legs ;
int eyes;
public:
animal(){}
animal(int x , int y):legs(x),eyes(y)
{}
};
class human :public animal{
int iq;
public:
human(){}
human(int x):iq(x){}
};
int main ()
{
animal a;
human *ptr;
ptr=&a;      //The issue in your code arises from the fact that human is derived from animal, but ptr is a pointer to a human object and you are trying to assign it the address of an animal object. This is not allowed in C++ because a base class pointer (animal*) can point to a derived class object (human), but the reverse is not true. A derived class pointer cannot point to a base class object because the derived class object may have additional members that the base class object does not have.

return 0;
}
