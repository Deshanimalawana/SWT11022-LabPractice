#include<stdio.h>

int main(){
    int num[10];

    printf("Enter 10 numbers\n");
    for(int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }


    printf("\nArray elements in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", num[i]);
    }

      return 0;


}
