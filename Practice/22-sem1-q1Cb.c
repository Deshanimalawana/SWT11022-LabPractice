#include <stdio.h>

int main()
{
    int height, width;
    printf("Enter the height: ");
    scanf("%d", &height);
    printf("\nEnter the Width: ");
    scanf("%d", &width);

    for (int i = 1; i <= width; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if (j == 1 || j == height || i == 1 || i == width)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}