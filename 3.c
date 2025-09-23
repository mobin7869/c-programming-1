#include<stdio.h>
int main()
{
int rows,cols,i,j;
int a[rows][cols];
int b[rows][cols];
int sum[rows][cols];
printf("enter values of a\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
scanf("\n%d",&a[i][j]);}}
printf("enter values of b\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
scanf("\n%d",&b[i][j]);}}
printf("\nthe sum of two matrices is :");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
sum[i][j]=a[i][j]+b[i][j];}}
printf("\nthe sum of two matrices is : %d",sum[i][j]);

return 0;}
