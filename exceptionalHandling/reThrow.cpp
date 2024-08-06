#include<iostream>
using namespace std;

////////////////////
void func (void)
{
int *a=new int(10);
int b=0;
try {
if(b==0){
string str="divided by zero";
throw str;
}
}
catch(const string &msg) // const ensures that msg cannot be modified in this block
{
delete a;
a=nullptr;
// msg="hello";
cout<<"error in function | "<<msg<<endl;
throw;
}
cout<<*a/b;
} // func
int main ()
{

try {
func();

}
catch(...)
{
cout<<"error handled in main"<<endl;
}
return 0;
}
