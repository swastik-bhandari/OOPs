#include<iostream>
using namespace std;
class student;
class result {
  public :
    void percentage(student &);
};
class student {
  int marks;
  public:
  void set_data(int x)
  {
    marks=x;
  }
  friend void result :: percentage(student &);
};
int main ()
{
  student s;
  s.set_data(5);
  result r;
  r.percentage(s);
  return 0;
}
    void result :: percentage(student &t)
    {
      cout<<t.marks<<"%"<<endl;
    }  
