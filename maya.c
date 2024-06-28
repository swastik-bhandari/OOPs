#include<stdio.h>
struct rectangle 
{
int l ;
int b ;
};
int area (struct rectangle);
int parameter(struct rectangle *);
int main ()
{
struct rectangle r;
struct rectangle rr={3,4};
int p =parameter (&rr);
r.l=3;
r.b=2;
int c;
c=area(r);
printf("the area is %d",c);
printf("\n the parameter is %d",p);
return 0;
}
int area (struct rectangle r)
{
return (r.l*r.b);
}
int parameter (struct rectangle *ptr)
{
//return (*ptr).l+(*ptr).b;
return ptr->l+ptr->b;
}

