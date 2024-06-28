#include<iostream>
using namespace std;
class student {
string name ;
float cgpa ;
public :
student(){};
student & set_data (string name , float cgpa )
{
this->name=name;
this->cgpa=cgpa;
return *this;
}
void display (void)
{
cout<<name<<endl;
cout<<cgpa<<endl;
}
};
int main ()
{
student s ;
s.set_data("swastik",3.75).display(); // (.) operator has precedence left to right .
return 0;
}

