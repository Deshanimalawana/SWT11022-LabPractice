#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter[10];

    for (int i=1; i<=10; i++){
        printf("enter letter no%d:", i);
        scanf(" %c", &letter[i]);

        if (letter[i]>= 'a' && letter[i]<= 'z') {
            printf(" %c is a lowercase alphabet.\n\n", letter[i]);
        }

        else if (letter[i] >= 'A' && letter[i] <= 'Z') {
            printf(" %c is an uppercase alphabet.\n\n", letter[i]);
        }

        else {
            printf(" %c is not an alphabet.\n\n", letter[i]);
        }
    }



    return 0;
}
