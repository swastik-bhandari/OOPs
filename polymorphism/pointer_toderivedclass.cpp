#include<iostream>
using namespace std;
class car {
public:
int tyres ;
string color;
public:
 void set_data(int x , string y)
{
tyres=x;
color=y;
}
void get_data(void)
{
cout<<"base class " <<endl;
cout<<tyres<<endl<<color<<endl;
}
};
class toyota : public car {
public:
int temp;
void get_data(void)
{
cout<<"derived class " <<endl;
cout<<tyres<<endl<<color<<endl;
cout<<temp<<endl;
}
};
int main ()
{
/*car c;
toyota t;
car *ptr; 
ptr=&t;   // ptr can only access the methods and data members which are inhertated by class car.
ptr->set_data(5,"swastik");
ptr->get_data();
ptr->tyres=5;
return 0;*/
/*
toyota t;
toyota *ptr;
ptr=&t;
ptr->set_data(3,"swastik");
ptr->temp=5;
ptr->get_data();
*/
car c;
toyota t;
car *ptr;
ptr=&t;
ptr->set_data(5 , "swastik");
//((toyota *)ptr)->temp=7;
//((toyota *)ptr)->get_data();
toyota *ptrderived;
ptrderived=static_cast<toyota * >(ptr);

ptrderived->get_data();


return 0;
}

