#include<iostream>
using namespace std;
class rectangle {
int l;
int b;
public:
//setter
void set_data(int x ,int y)
{
l=x;
b=y;
}
//getter
void get_data(void)
{
cout<<l<<endl<<b<<endl;
}
};
int main ()
{
rectangle r;
r.set_data(4,5);
r.get_data();
return 0;
}

