#include<stdio.h>
int main() {
 float arr[10];
 float num;
 int found = 0;
  printf("Enter 10 float numbers:\n");
  for(int i=0; i<10;i++){
    scanf("%f", &arr[i]);

  }
  printf("Enter another  float number\n");
  for(int i= 0; i<10; i++){
  scanf("%f", &num);
  }
  for(int i=0;i<10; i++){
    if(arr[i] == num){
        found = 1;
        break;
    }
  }
  if (found){
    printf("The number is present array.\n", num);
  }
    else{
        printf("The  number is not present in array.\n", num);
    }

  return 0;


}
