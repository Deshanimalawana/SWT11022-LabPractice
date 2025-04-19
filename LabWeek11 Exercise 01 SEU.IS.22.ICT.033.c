#include <stdio.h>

int main() {
    int input[10];

    printf("Enter 10 integers:\n");
    for(int i=0;i<10;i++) {
        scanf("%d",&input[i]);
    }
    printf("You entered:\n");
    for (int i=9; i>=0;i--){
        printf("%d ",input[i]);
    }
    return 0;
}
