#include<iostream>
#include<vector>
using namespace std;
int main ()
{
int num;
vector<int>v;
for(int i=0 ; i<10 ; i++)
{
cin>>num;
v.push_back(num);
}
vector<int>::iterator it=v.begin();
while(it!=v.end())
{
if(*it%2==0)
{
v.erase(it);
}
else
{
it++;
}
}
for(auto element :v)
{
cout<<element;
}
return 0;
}
