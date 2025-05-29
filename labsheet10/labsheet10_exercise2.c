#include<stdio.h>
int main(){
 int marks[6];
 int sum;
 float average;

 printf("Enter marks of 6 student:\n");
 for(int i=0; i<6; i++){
     printf("Subject %d: ", i + 1);
    scanf("%d",&marks[i]);
    sum+=marks[i];
 }
 average=sum/6;

 printf("\nEnterd marks:\n");
 for (int i=0;i<6; i++){
    printf("Subject%d: %d\n",i+1,marks[i]);
 }
 printf("\nAverage: %.2f",average);

return 0;
}
