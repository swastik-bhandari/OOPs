#include<iostream>
int order (int);
using namespace std;
int main ()
{
int n ;
cin>>n;
order(n);
return 0;
}
int order(int n)
{
if (n==-1)
{
cout<<endl;
return 0;
}
else
{
cout<< n;
int p = order(n-1);
cout<< p;
return p+1;
}}









