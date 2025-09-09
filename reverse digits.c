#include<stdio.h>
int main()
{
int num,r,reverse=0,original,sum=0;
printf("enter the number : ");
scanf("%d",&num);
printf("the reverse no. is : ");
original = num;
while(num>0)
{
r=num%10;
num=num/10;
sum += r;
reverse=reverse*10+r;
printf("%d",r);}

printf("\nsum of digits is : %d",sum);
if(reverse == original){
    printf("\n it is pallidrom");}
    else{
        printf("\n it is not a pallidrom");
    }
return 0;
}

