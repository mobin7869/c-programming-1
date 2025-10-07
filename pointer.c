
#include<stdio.h>
int main()
{
int var = 10;
int *ptr;

ptr = &var;
printf("value of var : %d\n",var);
printf("Address of var : %u\n",&var);
printf("value stored in ptr %: %u\n",ptr);
printf("value pointed by ptr : d\n",*ptr);
printf("address of pointer : %u\n",&ptr);
return 0;
}
