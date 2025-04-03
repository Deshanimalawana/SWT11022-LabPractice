#include <stdio.h>

int main()
{
    float numbers[10];
    float maximum;

    printf("Enter 10 floating point numbers:\n");


    for(int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    maximum = numbers[0];

    for(int i = 1; i < 10; i++)
    {
        if(numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    printf("\nThe maximum value is: %.2f\n", maximum);

    return 0;
}
