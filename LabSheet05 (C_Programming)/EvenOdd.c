#include <stdio.h>
#include <string.h>
int main(){
    int num = 2;
    char oddOrEven[20];
    strcpy(oddOrEven,(num%2 == 1) ? "odd" : "even");
    printf("The number is %s",oddOrEven);
    return 0;
}
