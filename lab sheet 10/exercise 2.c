#include<stdio.h>
int main(){
 int marks[6];
 float avg;

   for (int x = 0; x < 6; x ++){
        printf("Enter marks for student %d:", x + 1);
        scanf("%d",&marks[x]);
        avg += marks[x];
   }
   avg = avg / 6;
   printf("Student Marks =");
   for (int x=0;x<6;x++){
    printf("%d",marks[x]);
   }
   printf("\n Average is = %.2f",avg);
   return 0;
}
