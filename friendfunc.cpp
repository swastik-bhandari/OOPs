#include<iostream>
using namespace std;
class number {
int num1 ;
int num2;
friend number setdata_bysum (number );
friend int main ();
public:
void set_data(int n1 , int n2)
{
num1=n1;
num2=n2;
}
void get_data(void)
{
cout<<num1+num2<<endl;
}
};
number setdata_bysum (number s1)
{
 =5;
s1.get_data();
return s1;
}

int main ()
{
number s1 ,s2;
s1.set_data(3,5);
s2.set_data(6,7);
s1.get_data();
s2.get_data();
number s3;
s3=setdata_bysum(s1);
s3.get_data();
s1.num1=5;
s1.num2=9;
s1.get_data();
return 0;
}
