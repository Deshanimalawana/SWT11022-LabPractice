#include <stdio.h>
int main ()
{
    float Num[10];
    float Max_value;

    printf("Enter the Ten Numbers -->\n");
    for (int a = 0; a < 10; a++) {
        printf("Marks %d = ",a+1);
        scanf("%f",&Num[a]);
    }
    Max_value = Num[0];

    for ( int x = 1; x < 10; x++) {
        if (Max_value < Num[x]) {
                Max_value = Num[x];
        }
    }
    printf("\nThe Largest Number is = %.2f\n", Max_value);
    return 0;
}
