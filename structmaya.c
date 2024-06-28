#include<stdio.h>
typedef struct rec 
{
int l;
char ch;
int b;
}rec;
rec change( rec*);
int main ()
{
rec r;
r.l=7;
r.b=3;
r.ch='c';

printf("%d",r);
rec rr;
rr=change(&r);
printf("%d%d",rr.l , rr.b);
printf("%d%d",r.l , r.b);
return 0;
}
 rec change(rec *ptr)
{
(*ptr).l=5;
(*ptr).b=6;
return (*ptr);

}
