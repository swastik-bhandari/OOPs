#include<iostream>
#include<vector>
using namespace std;

int main ()
{
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
try {              // try does not thow exception on it's own .
cout<<v.at(5); // at() function has a thow mechanism inside it .

}
catch(exception &e)
{
cout<<"It's catched! "<<e.what()<<endl;
}
catch(...)
{
cout<<"It catches all exception"<<endl;
}

cout<<"I am still alive"<<endl;

return 0;
}
