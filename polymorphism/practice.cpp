#include<iostream>
using namespace std;
class shape {
public:
static int count ;
int edges ;
shape () {}
shape (int x) : edges(x){}
virtual void draw(void)=0;
virtual ~shape() {
cout<<"destructor of shape is called "<<count++;
}
};
int shape :: count =0;
class Circle : public shape {
public:
Circle(int x ) : shape(x) {}
void draw (void) override {
cout<<"drawing a circle " <<endl;
}
~Circle() {
cout<<"destructor of circle is called "<<endl;
}
};
class Rectangle : public shape {
public: 
void draw (void ) override {
cout<<"drawing a rectangle" <<endl;
}
~Rectangle(){
cout<<"destructor of rectangle is called "<<endl;
}
};
int main ()
{
shape *ptr[2];
ptr[0]=new Circle(0);
ptr[1]=new Rectangle();
for(int i=0 ; i<2 ; i++)
{
ptr[i]->draw();
}
for(int i=0 ; i<2 ; i++)
{
delete ptr[i];
}
return 0;
}
