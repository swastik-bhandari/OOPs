#include<iostream>
using namespace std;
class student {
int age ;
float gpa ;
public:
void set_data(int x , float y)
{
age=x;
gpa=y;
}
};
int main ()
{
student s;
s.set_data();
return 0;
}
