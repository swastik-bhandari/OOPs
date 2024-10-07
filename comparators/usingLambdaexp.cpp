#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
vector<pair<string , int>>v;
v.push_back(make_pair("swastik" , 8));
 v.push_back(make_pair("abhiyan" , 34));
 v.push_back(make_pair("sijan" , 22));
 v.push_back(make_pair("rochak" , 12));
 v.push_back(make_pair("santosh" , 7));

sort(v.begin() , v.end() , [](pair<string,int>p1 , pair<string,int>p2){ return(p1.second<p2.second);});

for(pair<string,int> &p : v) {
cout<<"(" <<p.first<<","<<p.second<<")"<<endl;
}
return 0;
}
 
