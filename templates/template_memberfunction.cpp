#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////
template <typename T , typename T1>
class student {
T marks ;
T subject;
public:
void setData(T marks , T subject)
{
this->marks=marks;
this->subject=subject;
}
void percentage(void);
};
/////////////////////////////////////////////////////////////
template<typename T>
class teacher {
T age;
public:
teacher(T x):age(x){}
void display(void);
};
//When defining member functions outside the class definition, you need to specify that these functions are part of a template class. This is done by repeating the template parameters:
template <typename a , typename b>
void student<a ,b> :: percentage(void)
{
cout<<marks/subject<<endl;
}
template<typename anything >
void teacher<anything>::display(void)
{
anything papa=8;
cout<<age<<endl<<papa<<endl;
}
int main () 
{
student<float ,int > s ;
s.setData(450,67);
s.percentage();
teacher<int> t(5);
t.display();
return 0;
}
