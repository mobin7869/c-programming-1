#include<stdio.h>
int main()
{
          int i,amount,note,sum=0;
          int notes[]={500,200,100,50,20,10,5,2,1};
          printf("enter amount :");
          scanf("%d",&amount);
          for(i=0;i<9;i++)
          {
                    note=amount/notes[i];
                amount= amount%notes[i];
                printf("\n%d notes of %d",note,notes[i]);
                sum+=note;
          }
          printf("\ntotal notes is %d",sum);
          return 0;

}
