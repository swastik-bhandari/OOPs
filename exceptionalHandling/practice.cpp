#include<iostream>
using namespace std;
int main ()
{
int a=1;
int b=0;
try{                                    
if(b==0){
throw "error";
}
else
{
}
}
catch(const char *s)                    // there can be multiple catch , but only one catch is executed . 
{                                       //if there are multiple catch with same argumen , the first catch will be executed.
cout<<"error";
}
catch(const char *sh)
{
cout<<"error 2";
}
cout<<"hello world";
return 0;
}
