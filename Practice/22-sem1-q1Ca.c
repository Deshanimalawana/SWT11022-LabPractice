#include <stdio.h>

int main()
{
    int row = 0, cols = 0;
    char space = ' ';
    char star = '*';
    printf("Enter row: ");
    scanf("%d", &row);

    printf("\nEnter cols: ");
    scanf("%d", &cols);

    for (int i = row; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%c", space);
        }
        for (int k = 0; k <= cols; k++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
}