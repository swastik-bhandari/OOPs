#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class mycomparator {
public:

bool operator() (pair<int,int>p1 , pair<int ,int>p2) {
return p1<p2;
}
};

int main ()
{
vector<pair<int ,int>>v;
v.push_back(make_pair(1,2));
v.push_back(make_pair(6,7));
v.push_back(make_pair(8,4));
v.push_back(make_pair(1,1));
v.push_back(make_pair(2,3));
sort(v.begin() , v.end() , mycomparator());
for(pair<int,int> &p : v) {
cout<<p.second;
}
return 0;
}
