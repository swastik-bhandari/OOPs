//if we make a function a vitual function , it will 
#include<iostream>
using namespace std;
class tesla {
protected:
string color ; 
int milage;
public:
tesla(){}
tesla(string x , int y ):color(x),milage(y)
{}
virtual void display(void)
{
cout<<"base class "<<endl;
}
};
class car : public tesla {
int weight ;
public :
car(){}
car(string x , int y , int z):tesla(x, y)
{
weight=z;
}
/*void display (void)
{
cout<<color<<endl<<milage<<endl<<weight<<endl;
}*/
};
int main ()
{
car c("blue",56,100);
tesla *ptr;
ptr=&c;
ptr->display(); 
return 0;
}
