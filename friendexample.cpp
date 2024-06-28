#include<iostream>
using namespace std;
class centimeter ; //forward declaration of class centimeter 
class meter {
  int num1;
  friend void sum (meter & , centimeter &);
  public:
  void set_data(int x)
  {
    num1=x;
  }
};
class centimeter {
  int num2;
friend void sum (meter & , centimeter &);
  public:
 void set_data(int x)
  {
    num2=x;
  }
};
void sum (meter &x  ,centimeter &y)
{
  cout<<(x.num1+(float)y.num2/100);
}
//driver code 
int main ()
{
  meter m ;
  centimeter cm;
  m.set_data(5);
  cm.set_data(125);
  sum (m , cm );
  return 0;
}
