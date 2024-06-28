#include<iostream>
using namespace std;
class student {
int marks;
public:
void set_marks(int x )
{
marks=x;
}
friend 
};
class result {
public :
void percentage (student &t)
{
cout<<t.marks<<"%"<<endl;
}
};
int main ()
{
student s;
s.set_marks(50);
result r ;
r.percentage(s);
return 0;
}
