#include<stdio.h>
int main()
{
int i;
int A[2];              //left code
int b[2];
int c[2];
printf("enter values of array a\n.

        ");


for(i=1;i<=2;i++)
{
scanf("\n%d",&A[i]);}
printf("enter values of array b ");

for(i=1;i<=2;i++)
{
scanf("\n%d",&b[i]);}
printf("the values of array c is :");

for(i=1;i<=2;i++)
{
c[i]=A[i]+b[i];
printf("\n%d",c[i]);}
return 0; }
