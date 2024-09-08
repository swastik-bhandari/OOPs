#include<iostream>
using namespace std;
class base {
int x ;
public:
void print(void)
{
cout<<"base1 ";
}
};
class derived1 : public base {
public:

};

class derived2 : public base{
public:

};
class derived3 : public derived1 , public derived2 {
public :
};


int main()
{
derived3 d;
d.derived2::print();
return 0;
}
