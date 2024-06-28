#include<iostream>
using namespace std;
class number
{
int a;
public :
number()
{
a=0;
}
number(int num)
{
a=num;
}
number(number &obj)
{
a=obj.a;
}
void display()
{
cout<<a<<"\n";
}
};

int main ()
{
number x , y(3) , z;
x.display();
y.display();
z.display();
number w(y);
w.display();
return 0;
}
