#include<iostream>
using namespace std;
class A
{
public:
int a;
A *next;
A(int x)
{
a=x;
next=NULL; 
}
void display()
{
cout<<a<<endl<<next;
}
};

void papa (A* &node2)
{
 cout<<node2->a;
}
int main ()
{
A *node1=new A(5);
A *node2 = new A(6);
node1->next=node2 ;
node1->display();
cout<<endl<<node2;
cout<<endl<<node2->next;
papa(node2);
return 0;
}
