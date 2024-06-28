#include<stdio.h>
#include<math.h>
void distance (int , int , int , int );
int main ()
{
char ch;
int a=0 ,b=0 ,c=0, d=0;
do{
scanf("%d%d%d%d",&a,&b,&c,&d);
distance (a ,b ,c ,d);
printf("enter n to stop");
scanf(" %c",&ch);
}while(ch!='n' && ch!='N');

return 0;
}
 void distance(int a ,int b , int c, int d)
{
float t=(float)sqrt(pow(a-c ,2)+pow(b-d , 2));
printf("the distance is %f\n",t);
}


