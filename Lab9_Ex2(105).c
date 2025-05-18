#include <stdio.h>

void printstars(int n){
for (int i=0; i<n; i++){
    printf("*");
}
}

int main(){

  int num;

  printf("Enter a number: ");
  scanf("%d",&num);
  printf("\n");

  printf("Input: %d\n",num);
  printf("Output: ");
  printstars(num);
  printf("\n");

  return 0;

}
