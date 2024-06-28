#include<stdio.h>

int main ()
{
int n , m , q, p;
printf("enter the order of first matrix \n");
scanf("%d%d",&n,&m);
printf("enter the order of second matrix \n");
scanf("%d%d",&q,&p);
int a[n][m];
int b[m][p];
printf("enter the elements of first matrix\n");
for (int i=0 ; i<n ; i++)
{
for (int j=0 ; j<m ; j++)
{
scanf("%d",&a[i][j]);
}}
printf("enter the elements of the second matrix ");
for (int i=0 ; i<m ; i++)
{
 for (int j=0 ; j<p ; j++)
 {
 scanf("%d",&b[i][j]);
 }}
 int c[n][p];
for (int i=0 ; i<n ; i++)
{
for (int j=0 ; j<p ; j++)
{c[i][j]=0;
for (int k=0 ; k<m ; k++)
{
c[i][j]+=a[i][k]*b[k][j];
}}}
for (int i=0 ; i<n ; i++)
{
for (int j=0 ; j<p ; j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
return 0;
}
