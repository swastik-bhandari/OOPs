#include<iostream>
using namespace std;
class employee {
int salary ; 
int id ;
string name;
public:
void set_info(void){
cin>>name;
cin>>salary;
cin>>id ;
}
/*void get_info(void){
cout<<name<<endl;
cout<<salary<<endl;
cout<<id ;
} */

};
int main ()
{
employee emp1 ; //emp1 is allocated in stack 
cout<<&emp1; 
employee *emp2= new employee ; // emp2 is allocated in heap
return 0;
}

