#include<iostream>
using namespace std;
template<class T1 , class T2>
class student {
string name ;
T1 age ;
T2 marks;
public:
student(){}
student(string n , T1 a , T2 m):name(n),age(a),marks(m)
{
cout<<" all the data is set "<<endl;
}
void getData(void)
{
cout<<"the name of student is "<<name<<endl;
cout<<"the age of student is "<<age<<endl;
cout<<"the marks of student is "<<marks<<endl;
}
};
int main ()
{
student<int , float>s;
s=student("swastik",18 , 78.98);
s.getData();
return 0;
}
