#include<iostream>
using namespace std;
class number {
int num ; 
public:
number(){
num=0;
}
number(int x)
{
num=x;
}
/*number( number &obj) //if copy constructor is not provided by 
{                       // programmer , compiler provides its own 
num=obj.num;            // copy constructor.
}*/
void display ()
{
cout<<num;
}
};
int main ()
{
number x(4);
number y;
//number z(x);
number z=x;
x.display();
y.display();
z.display();
return 0;
}
