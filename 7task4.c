#include <stdio.h>
int main () {
int input;

    do{
        printf("Enter a negative number: ");
        scanf("%d",&input);
    }
    while(input >=0);

    printf("You entered a negative number:%d\n",input);

    return 0;
}
