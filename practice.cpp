#include<iostream>
using namespace std;

class base {
public:
 virtual void display(void) =0;
};
class derived : public base {
public:
void display(void) {
cout<<"derived class display function is invoked " <<endl;
}
};

int main ()
{
base *b=new derived ();

//((derived *)b)->display();
b->display();
return 0;
}
