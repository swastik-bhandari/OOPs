#include<iostream>
namespace papa {
void swap ( int &x, int &y)
{
x=x+y;
y=x-y;
x=x-y;
}}
class rod2;
using std::cout;
using std :: cin ;
using std :: endl;

class rod1  {
int num1;
public:
void set_data(int x )
{
num1=x;
}
friend void exchange ( rod1  &, rod2 &);
};
class rod2 {
int num2 ;
public :
void set_data(int x ){
num2=x;
}
friend void exchange( rod1  & , rod2 &);
};

void exchange (rod1 &t1 , rod2 &t2)
{
papa :: swap(t1.num1 , t2.num2);
cout<<t1.num1<<endl<<t2.num2;
}
int main ()
{
rod1 l1;
rod2 l2;
l1.set_data(3);
l2.set_data(4);
exchange(l1, l2);
return 0;
}


