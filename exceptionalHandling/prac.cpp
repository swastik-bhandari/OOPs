#include<iostream>
#include<vector>
using namespace std;

void  divide (int a  , int b) {

try {

if(b==0) {
throw "divided by zero "; 
}
}
catch( const char * s ) {
cout<<s<<endl;
throw;
}

}
int main ()
{ 
vector<int>v={1,2,3};
try {
cout<<v.at(4);
}
catch(out_of_range &e){
cout<<e.what();
}
catch(...) {
cout<<"error"<<endl;
}
return 0;
}
