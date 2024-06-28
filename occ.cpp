#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main ()
{
int n ; 
cin>>n;
int a[n] , b[10000];
for (int i =0 ; i<n ; i++)
{
cin>>a[i];
}
 b[10000]={0};
int mx =1 , minimum =0, maximum=1;
for(int i=0; i<n; i++)
{
if(b[a[i]]==0)
b[a[i]]==1;
else
{
b[a[i]]+=1;
mx=max(mx,b[a[i]]);
}}
cout<<b[2]<<mx;
for(int i=0; i<n;i++)
{
if(b[a[i]]==mx)
{
minimum = min(minimum , i);
maximum=max(maximum , i);
}}
cout<<"first occurs at "<<minimum;
cout<<"last occurs at "<<maximum;

return 0;
}
