/* #include<iostream>
using namespace std;

class number{
public:
 number(int x)
{
cout<<x;
}
};
int main ()
{
number num=5; // 5 is implicitly converted to complex object. i.e. temporary object is created passing 5 as an argument to complex constructor.
return 0;
} */
#include<iostream>
using namespace std;

class number{
public:
explicit number(int x)
{
cout<<x;
}
};
int main ()
{
//number num=5; // if you declare constructor as explicit , it prevents implicit conversions .
return 0;
}
