#include<iostream>
using namespace std;
class superclass {
int num1;
public:
superclass(){}
superclass(int x):num1(x){}
virtual void display(void)
{
cout<<"superclass constructor is invoked"<<num1<<endl;
}
};
class subclass : public superclass{
int num2;
public:
subclass(){}
subclass(int x):num2(x){}
void display(void)
{
cout<<"subclass constructor is invoked "<<num2<<endl;
}
};
int main ()
{
subclass c(4);
superclass *ptr;
ptr=&c;
//using c style cast
//((subclass *)ptr)->display();
//using c++ style cast 
// static_cast<dog*>(ptr)->makesound();
/*// Using dynamic_cast to cast base class pointer to derived class pointer
    dog *d_ptr = dynamic_cast<dog*>(ptr);
    if (d_ptr) {
        d_ptr->makesound(); // This works correctly because ptr actually points to a dog object
    } else {
        cout << "Cast failed" << endl;
    }
*/
//static_cast: It converts the pointer type without any runtime checks. Use it when you are certain about the types and know the cast is safe.
//dynamic_cast: It converts the pointer type with runtime checks. If the conversion is not possible, it returns nullptr for pointers, ensuring that the program can handle such cases gracefully.
ptr->display();
return 0;
}

