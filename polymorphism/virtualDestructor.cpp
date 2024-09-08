#include<iostream>
using namespace std;
class base {
public:
base(){
cout<<"base class constructor"<<endl;
}
virtual ~base(){
cout<<"base class desturctor " <<endl;
}
};
class derived :public base {
public:
derived(){
cout<<"derived class constructor"<<endl;
}
~derived()
{
cout<<"derived class destructor "<<endl;
}
};
int main ()
{
base *b=new derived();
/*
derived *d=new derived ();
base *b =d ;
*/
delete b;
return 0;
}
