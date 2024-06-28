#include<iostream>
using namespace std;
class shopitem {
public:
int item_id ;
int item_price ;
};
int main ()
{
int id , price ;
const int size =3;
shopitem *ptr= new shopitem[size];
for (int i=0 ; i<size ; i++)
{
 cout<<"enter the id and price of item :"<<i+1<<endl;
 cin>>id>>price;
 (*(ptr+i)).item_id=id;
 (*(ptr+i)).item_price=price;
} 
for (int i=0 ; i<size ; i++)
{
 cout<<(*(ptr+i)).item_id<<endl;
 cout<<(*(ptr+i)).item_price<<endl;
}
delete [] ptr;
ptr=nullptr;
return 0;
}
