#include<iostream>
#include<nlohmann/json.hpp>
#include<fstream>
using nlohmann::json;
using namespace std;
int main ()
{
ifstream file("student.json");
if (!file.is_open())
{
cerr<<"unable to open file"<<endl;
return 1;
}
json jsondata;
file >> jsondata;
file.close();
cout<<"name:"<<jsondata["name"]<<endl;
cout<<"age:"<<jsondata["age"]<<endl;
if(jsondata["is_student"]){
cout<<"yes i am a student";
}
else
cout<<" no i am not a student";
return 0;
}

