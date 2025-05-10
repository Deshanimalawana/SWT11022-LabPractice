#include<stdio.h>
int main() {
   int marks[6];
   int total;
   float average;
    printf("Enter marks for 6 students\n ");
    for(int i=1;i<6;i++)
    {
        printf("Enter marks student [%d]: ",i);
        scanf("%d",&marks[i]);
    }
   for (int i=0;i<6;i++)
   {
       total+=marks[i];
   }
       average=total/6;
       for(int i=1;i<6;i++){
        printf("Student [%d] marks is: %d\n ",i,marks[i]);
       }
       printf("average marks of students is: %.2f",average);

    return 0;
}
