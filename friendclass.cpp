#include<iostream>
using namespace std;
class dimension {
  int num1;
  int num2;
  protected :
  int num3;
  public:
  void set_data(int x , int y)
  {
    num1=x;
    num2=y;
  }
  friend class rectangle;// here rectangle is a friend class of dimension , so it can access private members of dimension.
};
class rectangle{
  public:
    void area(dimension &t)
    {
      cout<<t.num1*t.num2;
    }
};
int main ()
{
  dimension d;
  d.set_data(2,5);
  rectangle r;
  r.area(d);
  return 0;
}
