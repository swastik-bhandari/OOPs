#include<iostream>
using namespace std;
class sum
{
int n1 ,n2 ;
public:
void set_data(int x , int y)
{
n1=x;
n2=y;
}
void get_data(void)
{
cout<<n1<<endl<<n2<<endl;
}
void setdata_bysum( sum a , sum b)
{
n1=a.n1 + b.n1;
n2=a.n2 + b.n2;
}
};
int main ()
{
sum c1 , c2;
c1.set_data(3,4);
c2.set_data(6, 7);
c1.get_data();
c2.get_data();
sum c3;
c3.setdata_bysum(c1 , c2);
c3.get_data();
return 0;
}


