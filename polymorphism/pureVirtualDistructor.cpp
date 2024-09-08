#include<iostream>
using namespace std;
class base {
public:
base()
{
cout<<" b constructor"<<endl;
}
virtual ~base() = 0;
};
base :: ~base() {
cout<<"b destructor "<<endl;
}
class derived :public base {
public:
derived(){
cout<<" d constructor " <<endl;
}
~derived ()
{
cout<<" d destructor"<<endl;
}
};
int main ()
{
base * b= new derived ();
delete b;
return 0;
}
