#include <stdio.h>

void printStars(int n){
    for(int i=0; i<n; i++){
        printf("*",i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of Stars: ");
    scanf("%d", &n);
    printStars(n);
    return 0;
}
