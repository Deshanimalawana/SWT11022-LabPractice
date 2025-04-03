#include<stdio.h>
int main(){
 float marks[10];
 float max_value;

  printf("Enter the marks of 10 students:\n");
   for(int x = 0; x < 10; x ++){
    printf("Enter marks for student %d:", x + 1);
    scanf("%f", &marks[x]);
   }
   max_value = marks[0];
   for (int x = 1; x < 10; x ++){
    if (marks [x] > max_value){
        max_value =  marks[x];
    }
   }
  printf("\n The maximum marks are : %.2f\n",max_value);

  return 0;
}
