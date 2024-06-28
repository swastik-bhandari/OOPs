#include<iostream>
using namespace std;
class apnacollage {
protected:
string topic;
float rating ;
public:
apnacollage(){}
apnacollage(string x , float y):topic(x),rating(y){
}
virtual void display(void)
{
cout<<topic<<endl<<rating<<endl;
}
};
class video : public apnacollage {
float duration ;
public:
video(){}
video(string x , float y , float z) : apnacollage(x, y) 
{
duration=z;
}
void display(void)
{
cout<<topic<<endl<<rating<<endl<<duration<<endl;
}
};
class text : public apnacollage {
float lenght ;
public:
text(){}
text(string x , float y , float z) : apnacollage(x, y) 
{
lenght=z;
}
void display(void)
{
cout<<topic<<endl<<rating<<endl<<lenght<<endl;
}
};
int main ()
{
video v("virtualFunctions",4,5.67);
text t("virtualFunctions",3.3,77);
apnacollage *ptr[2];
ptr[0]=&v;
ptr[1]=&t;
ptr[0]->display();
ptr[1]->display();
return 0;
}
