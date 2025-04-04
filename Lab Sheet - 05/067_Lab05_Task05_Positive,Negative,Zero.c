#include <stdio.h>
int main ()
{
    int Number;

    printf("Enter a Number :- ");
    scanf("%d", &Number);

    if (Number>0) {
        printf("The Number is Positive..!\n");
    }else if (Number<0) {
        printf("The Number is Negative..!\n");
    }else {
        printf("The Number is Zero..!\n");
    }
    return 0;
}
