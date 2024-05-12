#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class simple_calculator {
protected:
float num1 , num2 ;
double result ;
char symbol;
public:
void set_num1(int);
void set_symbol(char);
void get_result(void);
void simp_operation(void);
};
void simple_calculator :: set_num1(int x)
{
num1 = x;
}
void simple_calculator :: set_symbol(char ch)
{
symbol=ch;
}
void simple_calculator::get_result(void)
{
cout<<result<<endl;
num1=result;
}
void simple_calculator::simp_operation(void)
{
cin>>num2;
if (symbol=='*')
{
result=num1*num2;
}
else if (symbol=='-')
{
result=num1-num2;
}
else if (symbol=='+')
{
result=num1+num2;
}
else if (symbol=='/')
{
result=num1/num2;
}
else
{
cout<<"error";
exit(0);
}
}
//base class 
class scientific_calculator : public simple_calculator {
public:
void sci_operation(void);
};


void scientific_calculator :: sci_operation(void)
{
if(symbol=='s')
{
result=sqrt(num1);
}
else if(symbol=='e')
{
result=exp(num1);
}
else if(symbol=='c')
{
result=ceil(num1);
}
else if(symbol=='p')
{
result=pow(num1,2);
}
else if (symbol=='t')
{
cout<<"successfully terminated";
exit(1);
}
else
{
simp_operation();
}
}
int main ()
{
float n1 , n2;
char ch;
scientific_calculator s;
system("clear");
cout<<"press 't' to terminate"<<endl;
cin>>n1;
s.set_num1( n1 );
do{
cin>>ch;
s.set_symbol(ch);
s.sci_operation();
system("clear");
s.get_result();
}while(true);
return 0;
}

