#include<iostream>
#include<vector>
using namespace std;
int main ()
{
vector<int>v;
v.push_back(15);
v.push_back(20);
v.push_back(30);
/*for (int i=0 ; i<v.size() ; i++)
{
cout<<v[i]<<endl;
}
vector<int>::iterator it = v.begin();
for ( it ; it!=v.end() ; it++)
{
cout<<*it<<endl;
}*/
for (auto element:v )
{
cout<<element<<endl;
}
vector<int>v1 (2 , 50 );
// 50 50 
v.pop_back();
for (auto a:v)
cout<<a<<endl;
for (vector<int>::iterator it = v.begin() ; it!=v.end() ; it++)
cout<<*it;
return 0;
}
//auto sets the datatype according to the initilization . here auto is int .


