#include<iostream>
using namespace std;
class complex {
int num1 ;
int num2 ;
public:
void set_data(int , int );
void get_data(void);
friend void area(complex &);
};
int main ()
{
complex c ;
c.set_data(4,3);
c.get_data();
area(c);
return 0;
}
void complex :: set_data(int x , int y)
{
num1=x;
num2=y;
}
void complex :: get_data(void)
{
cout<<num1<<"+"<<num2<<"i"<<endl;
}
void area (complex &a)
{
cout<<a.num1*a.num2;
}


