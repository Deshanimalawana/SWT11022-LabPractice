#include <stdio.h>
int main(){
      int subject[6];
      int sum = 0;
      float avg;
      int i;

      printf("enter the marks :");
      for(i =0; i<6;i++){
        scanf("%d",&subject[i]);
      sum += subject[i];}
      avg = sum/6.0;

      printf("sum is %d\n",sum );
      printf("avg is %.1f\n",avg );
return 0 ;
}
