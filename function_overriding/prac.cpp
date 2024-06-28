#include<iostream>
using namespace std;
class animal{
int legs;
public:
void makesound(void)
{
cout<<"any animal sound"<<endl;
}
};
class birds
{
public:
void makesound(void)
{
cout<<"any bird sound"<<endl;
}
};
class dog: public animal , public bird{
public:
void makesound(void)
{
cout<<"bark"<<endl;
}
};
int main ()
{
dog d;
d.makesound();
d.animal::makesound();
return 0;
}
