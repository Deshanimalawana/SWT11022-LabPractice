#include <stdio.h>
int main ()
{
    char Elements[10];

    printf("Enter the Ten Alphabet Letters :- ");
    for ( int x = 0; x < 10; x++) {
        scanf(" %c",&Elements[x]);
    }

    for ( int x = 0; x < 10; x++) {

        if ( Elements[x] >= 'A' && Elements[x] <= 'Z') {
            printf("The %c is a Uppercase Alphabet\n", Elements[x]);

        }else if ( Elements[x] >= 'a' && Elements[x] <= 'z') {
            printf("The %c is a Lowercase Alphabet\n", Elements[x]);

        }else {
            printf("The %c is NOT an Alphabet\n", Elements[x]);
        }
    }
    return 0;
}
