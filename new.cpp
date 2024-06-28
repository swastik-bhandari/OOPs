#include<iostream>
using namespace std;
#define size 3
int main ()
{
int *ptr=new int[size];
for (int i=0 ; i<size ; i++)
{
cin>>ptr[i];
}
for (int i=0 ; i<size ; i++)
{
cout<<ptr[i];
}
cout<<ptr;
delete ptr;
cout<<ptr;
//after delete , the memory becomes free , but now the ptr is dangling pointer here. ptr is still pointing that memory location . 
ptr=nullptr;//ptr is pointing to null
cout<<ptr;
return 0;
}
