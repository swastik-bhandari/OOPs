#include<iostream>
int shot(int[] , int);
using namespace std;
int main ()
{
int n;
cout<<"enter index";
cin>>n;
int a[n];
for(int i =0 ; i<n; i++)
{
cin>>a[i];
}
int c=shot(a,n);
if(c==1)
cout<<"shoted";
else
cout<< "not shoted";
return 0;
}
int shot(int a[] , int n)
{
static int i;
 if (i==n)
 {
 return 1;
 }
 else if( a[i]<=a[i+1])
 {
 i++;
 return(shot(a , n));
 }
 else
 {
 i++;
 return 0;
}
}
 
 
 









