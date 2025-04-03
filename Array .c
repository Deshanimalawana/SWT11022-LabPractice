#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num[5];

  printf("Enter 5 numbers:\n");
  for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
  }

  printf("\n The numbers entered are:\n");
  for(int i = 0;i<5;i++){
    printf("%d",num[i]);
  }
    return 0;
}
