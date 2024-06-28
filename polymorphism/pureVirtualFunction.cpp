#include<iostream>
using namespace std;
class animal {
public:
virtual void makesound(void){}// pure virtual function
};
class dog : public animal{
public:
 void makesound(void)
 {
 cout<<"bark"<<endl;
 }
};
class cat : public animal{
public:
void makesound(void)
{
cout<<"meow"<<endl;
}
};
int main ()
{ 
animal a;
animal *ptr[2];
dog d; 
cat c;
ptr[0]=&d;
ptr[1]=&c;
ptr[0]->makesound();
ptr[1]->makesound();
return 0;
}

