#include<iostream>
using namespace std;

class mul{
int x ;
public:
mul() {
}
mul ( int x) : x(x) {}

int operator () (int x) {
return ( this->x * x) ;
}
};
int main ()
{
mul m(5) ;
cout<<m(12);
return 0;
}
