#include<iostream>
using namespace std;
//first base class
class length_of_rectangle{
protected:
int length;
public:
void set_length(int);
};
//fuction to set the length of rectangle  
void length_of_rectangle:: set_length(int x)
{
length=x;
}
//second base class
class breadth_of_rectangle {
protected:
int breadth;
public:
void set_breadth(int);
};
//function to set the breadth of rectangle
void breadth_of_rectangle :: set_breadth(int x)
{
breadth=x;
}
//derived class (multiple inheritance )
class area_of_rectangle : public length_of_rectangle , public breadth_of_rectangle {
protected:
int area;
public:
void get_area(void);
};
//function defination to calculate and display area of the rectangle 
void area_of_rectangle :: get_area(void)
{
area=length*breadth;
cout<<area;
} 
int main ()
{
area_of_rectangle rec ;
rec.set_length(3);
rec.set_breadth(4);
rec.get_area();
return 0 ;
}
