#include<stdio.h>
int main()
{
int a,b;
int *x;
int *y;
y = &b;
x = &a;
printf("enter a :");
scanf("%d",x);
printf("\nenter b :");
scanf("%d",y);

printf("value of a is : %d\n",*y);
printf("value of b is : %d\n",*x);
return 0;
}
