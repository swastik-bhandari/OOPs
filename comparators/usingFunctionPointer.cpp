#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycomparator (int x , int y)
{
return x>y;
}

int main ()
{
vector<int>v={1,2,8,4,3};
sort(v.begin() , v.end() , mycomparator);
for(int &it : v)
{
cout<< it;
}
return 0;
}
