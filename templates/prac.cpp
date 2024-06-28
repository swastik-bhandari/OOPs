#include<iostream>

using namespace std;

template<class Type>
class Base
{
   public:
   Type member;
   Base(Type param): member(param){

   }
};

template<class Type>
class Derived: public Base<Type>
{
    public:               
    Derived(Type param):Base<Type>(param){
    }
    void display()
    {
        cout << this->member;
    }
};

int main()
{
   Derived<int> p(5);
   p.display();
   return 0;
}
