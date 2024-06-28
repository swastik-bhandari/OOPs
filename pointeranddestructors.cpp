#include<iostream>
using namespace std;
class book{
public:
string title ;
int pages;
int *rate;
book(){
}
book(string t , int p)
{
title=t;
pages=p;
rate= new int[2];
rate[0]=4 ;
rate[1]=5 ;
cout<<rate<<endl<<&rate[0];
cout<<title<<" contructors is invoked "<<endl;
}
};
int main ()
{
book b1("theory of everything" , 200 );
book b2("time" , 399);
return 0;
}

