#include<iostream>
using namespace std;
class rectangle {
int lenght;
int breadth;
public:
rectangle(){}
rectangle (int l , int b)
{
lenght=l;
breadth=b;
}
rectangle(rectangle &r)
{
lenght=r.lenght;
breadth=r.breadth;
}
~rectangle()
{}
void display(void)
{
cout<<lenght;
cout<<breadth;
}
};
int main ()
{
rectangle r1(4,5);
rectangle r2=r1;
r2.display();
return 0;
}

