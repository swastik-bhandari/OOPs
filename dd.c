#include<stdio.h>
void transpose (int [][20] ,int [][20], int );
int main ()
{
int n;
scanf("%d", &n);
int m[20][20];
int t[20][20];
for(int i=0 ; i<n ; i++)
{
for(int j=0 ; j<n ; j++)
{
scanf("%d",&m[i][j]);
}}
transpose(m , t, n);
for(int i=0 ; i<n ; i++)
{
for(int j=0 ; j<n ; j++)
{
printf("%d\t",t[i][j]);
}
printf("\n");
}
return 0;
}
void transpose(int m[][20] ,int t[][20], int n)
{
for(int i=0 ; i<n ; i++)
{
for(int j=0 ; j<n ; j++)
{
t[i][j]=m[j][i];
}}
}

