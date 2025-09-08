#include<stdio.h>
int main() {
  float num[10];
  float max_value;
  printf("Enter marks for 10 students: \n");
  for (int i=1;i<=10;i++){
   printf("Student %d: ",i);
    scanf("%f",&num[i]);
  }
      max_value=num[0];
       for(int i=1;i<=10;i++){
      if (num[i]>max_value){
        max_value=num[i];
      }
       }
      printf("%.1f",max_value);

  return 0;

}
