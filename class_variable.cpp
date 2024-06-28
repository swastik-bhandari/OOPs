#include<iostream>
using namespace std;
class student{
public:
int age ;
string name ;
static int count;// declaration , no memory is allocated 
public:
void display()
{
cout<<age<<endl ;
cout<<name<<endl ;
//cout<<count<<endl ;
}
void set_data(int nums, string str)
{
age=nums;
name=str;
count++;
}
static void func(void)
{
cout<<"counting"<<count<<endl;
}
};
int student :: count ;// defination .single memory is allocated in data segment. memory is allocated when it is defined .
int main ()
{
student s1;
s1.set_data(18, "swastik");
s1.display();
 student::func();
student s2;
s2.set_data(19 , "ashok");
s2.display();
 student::func();
return 0;
}
