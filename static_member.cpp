#include<iostream>
using namespace std;
class student {
int marks ;
static int count ; //decleration , no memory is allocated . it tells the compiler about the existance of static variable .
public :
void set_data(int x)
{
marks=x;
}
void display()
{
cout<<marks<<endl;
cout<<count<<endl;
}
static void increment (void)
{
count++;
}
};
int student :: count ; //defination, memory is allocated in data segment .

int main ()
{
student s;
s.set_data(5);
student :: increment();
s.display();
student s1;
s1.set_data(4);
student :: increment();
s1.display();
return 0;
}
