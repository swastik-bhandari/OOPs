#pragma pack(1)
#include<iostream>
using namespace std;
class base{
public:
int num1;
};
class derived1:public virtual base{
};
class derived2:public virtual base{
};
class derived3:public derived1 , public derived2{
};
int main ()
{
derived2 d2;
derived1 d1;
derived3 d;
cout<<sizeof(d);
cout<<endl<<sizeof(d2);
cout<<sizeof(d1);
return 0;
}


