#include<iostream>
using namespace std;
class student {
protected:
int *ptr;
int rollno ;
public:
void set_rollno ( int );
void get_rollno (void);
};
void student :: set_rollno(int x)
{
rollno=x;
}
void student :: get_rollno(void)
{
cout<<"roll no of student is "<<rollno<<endl;
}

//derived class exam
class exam : public student {
protected :
float math;
float physics;
public:
void set_marks (float , float);
void get_marks(void);
};
//fuctions 
void exam :: set_marks(float marks_math , float marks_physics)
{
math=marks_math;
physics=marks_physics;
}
void exam :: get_marks(void)
{
cout<<"marks in math is "<<math<<endl;
cout<<"marks in physics is"<<physics<<endl;
}

// another derived class 
class result : public exam {
public:
result( int x )
{
cout<<x<<" result constructors is called"<<endl; 
}
void student_result ( void );
};

void result ::student_result(void)
{
if ( math>=40 && physics>=40)
{
cout<<"pass"<<endl;
}
else
{
cout<<"fail"<<endl;
}
}
int main ()
{
result st(3) ;
st.set_rollno(1);
st.get_rollno();
st.set_marks(33 , 44);
st.get_marks();
st.student_result();
return 0;
}




