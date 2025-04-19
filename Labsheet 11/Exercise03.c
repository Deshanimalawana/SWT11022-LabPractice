#include <stdio.h>
int main ()
{
    char Real_Char[10] = {'M','I','S','T','E','R','@','#','$','5'};
    char duplicate[10];

    for (int i = 0; i < 10; i++) {
        duplicate[i] = Real_Char[i];
    }

    printf("The Real Array Characters :- ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", Real_Char[i]);
    }

    printf("\nThe Duplicate Array Characters :- ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", duplicate[i]);
    }
    printf("\n");
    return 0;
}
