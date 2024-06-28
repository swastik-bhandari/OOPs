#include<iostream>
using namespace std;
class book{
public:
string title ;
int pages;
book(){
}
book(string t , int p)
{
title=t;
pages=p;
cout<<title<<" contructors is invoked "<<endl;
}
~book()
{
cout<<title << " destructor is invoked "<<endl;
}
};
int main ()
{
book b1("theory of everything" , 200 );
book b2("time" , 399);
return 0;
}
//destructors are invoked in reversed order because , if one object depends on another object , and if destructors are invoked in same order as constructors , there is possibilities of dangling refrences and resouces leak.

