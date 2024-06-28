#include<iostream>
#include<string.h>
using namespace std;
class student 
{
public:
string s;
int age ;
int grade ;
int f ;
int fact (int x )
{
if (x==0)
{
return 1;
}
else
return (x*fact(x-1));
}
};
int main ()
{
student a1 ;
cin >> a1.s;
cin >> a1.age;
cin >> a1.grade;
cout << a1.s << endl;
cout << a1.age << endl;
cout << a1.grade<< endl;
cin>>a1.f;
cout<< a1.fact(a1.f);
return 0;
}


