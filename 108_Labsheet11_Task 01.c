#include <stdio.h>
int main(){
    int number [10];

    printf("Enter 10 integers:\n");
    for(int i=0; i<10; i++){
        printf("Enter number %d : ", i +1);
        scanf("%d", &number[i]);
    }

    printf("\nArray elements in reverse order:\n");
    for (int i=9; i>=0; i--){
         printf("%d\n", number[i]);
    }

    return 0;
}
