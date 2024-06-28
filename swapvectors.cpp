#include<iostream>
#include<vector>
using namespace std;
int main ()
{
vector<int>v1;
vector<int>v2;
v1.push_back(2);
v1.push_back(4);
v1.push_back(3);
v2.push_back(7);
v2.push_back(6);
v2.push_back(8);
swap(v1 , v2);
for (int a:v1)
cout<<a;
for(int a:v2)
cout<<a;
return 0;
}




