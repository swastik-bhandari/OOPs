#include<iostream>
using namespace std;
class node
{public:
int a;
node* next;
node()
{}
node(int x)
{
a=x;
next=NULL;
}
};
void insert_at_tail(node* &head , int x)
{
node *n= new node(x);
if (head==NULL)
{
head=n;
return;
}
node *temp = head;
if (temp->next!=NULL)
{
temp=temp->next;
}
else
{
temp->next=n;
}
}
void insert_at_head(node* &head , int x)
{
node *temp=new node(x);
temp->next=head;
temp->a=x;
}
void display(node* &head)
{
node* temp=head;
while (temp!=NULL)
{
cout<<temp->a;
temp=temp->next;
}
}
int main ()
{
node *head=NULL;
insert_at_tail(head ,5);
insert_at_tail(head ,6);
insert_at_tail(head ,7);
insert_at_tail(head ,8);
display(head);
return 0;
}

