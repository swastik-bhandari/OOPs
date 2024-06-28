#include<stdio.h>
void takin(int [][10] , int [][10] , int * ,int * ,int *);
void mulmatrix(int [][10] , int [][10] ,int [][10], int * ,int * ,int *);
void display(int [][10] , int* , int *);

int main ()
{
int a ,b ,c ,d ;
printf("enter the order of first matrix \n");
scanf("%d%d", &a ,&b);
printf("enter the order of second matrix\n");
scanf("%d%d", &c,&d);
int e[20][20] ;
int f[20][20];
int g[20][20];
if (b==c)
{
takin(e,f,&a,&b,&d);
mulmatrix(e,f,g,&a,&b,&d);
display(g ,&a ,&d);
}
else
{
printf("matrix multiplication is not possible");
}
return 0;
}
takin(int e[][10] ,int f[][10] , int *a ,int *b ,int *d)
{
printf("enter the elements of first matrix\n");
for (int i=0 ; i<*a ; i++)
{
for (int j=0 ; j<*b; j++)
{
scanf("%d",&e[i][j]);
}}
printf("enter the elements of second matrix\n");
for (int i=0 ; i<*b ; i++)
{
for (int j=0 ; j<*d ; j++)
{
scanf("%d",&f[i][j]);
}}
}
mulmatrix(int e[][10] ,int f[][10] ,int g[][10], int *a ,int *b ,int *d)
{
for (int i=0 ; i<*a ; i++)
{
for (int j=0 ; j<*d ; j++)
{g[i][j]=0;
for (int k=0 ; k<*b ; k++)
{
g[i][j]+=a[i][k]*b[k][j];
}}}
}
display(int g[][10], int *a ,int *d)
{
for (int i=0 ; i<*a ; i++)
{
for (int j=0 ; j<*d ; j++)
{
printf("%d",g[i][j]);
}
printf("\n");
}
}

