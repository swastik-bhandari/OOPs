#include<iostream>
using namespace std;
class node
{public:
int a;
node* next;
node(int x)
{
a=x;
next=NULL;
}
};
void insert_at_tail(node* &head , int x)
{
node *n= new node(x);
node *temp = head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=n;
}
void display(node* &head)
{
node* temp=head;
while (temp!=NULL)
{
cout<<temp->a<<endl;
temp=temp->next;
}
}
void insert_at_head(node* &head , int x)
{
node *n=new node(x);
n->next=head;
head=n;
}
void search(node* &head , int x )
{
node *temp=head;
while(temp!=NULL)
{
if(temp->a==x)
{
cout<<"it is an element";
return;
}
temp=temp->next;
}
cout<<"it is not an element";
return;
}
void deletion(node* &head , int x)
{
node* temp;
temp=head;
while(temp->next->a!=x)
{
temp=temp->next;
}
node* todelete=temp->next;
temp->next=temp->next->next;
delete todelete;
}
void reverse (node* &head)
{
node * temp;
temp=head;
node* ptr;
do
{
ptr=temp->next->next;
temp->next->next=temp;
temp=temp->next;
}while(ptr!=NULL);
head->next=NULL;
}

int main ()
{
int n;
node *head= new node(5);
insert_at_tail(head, 6);
insert_at_tail(head, 7);
insert_at_tail(head, 8);
insert_at_head(head, 4);
insert_at_head(head, 3);
insert_at_head(head, 2);
insert_at_head(head, 1);
insert_at_tail(head, 9);
display(head);
//cin>>n;
//search(head , n);
//deletion(head , 4);
//display(head);
reverse(head);
display(head);
return 0;
}

