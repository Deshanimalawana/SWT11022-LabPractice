#include <stdio.h>
int main ()
{
    char Elements[10];

    printf("Enter the Ten Alphabet Letters : \n");
    for ( int x = 0; x < 10; x++) {
        printf("Enter %d letter : ",x + 1);
        scanf(" %c",&Elements[x]);
    }

    for ( int x = 0; x < 10; x++) {

        if ( Elements[x] >= 'A' && Elements[x] <= 'Z') {
            printf("\n The %c is a Uppercase Alphabet\n", Elements[x]);

        }else if ( Elements[x] >= 'a' && Elements[x] <= 'z') {
            printf("\n The %c is a Lowercase Alphabet\n", Elements[x]);

        }else {
            printf("\n The %c is NOT an Alphabet\n", Elements[x]);
        }
    }
    return 0;
}
