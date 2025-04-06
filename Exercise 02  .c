#include <stdio.h>
int main()
{
    int marks[6];
    float average;
    int sum = 0;

    printf("Enter the marks for six subject : \n");

    for (int i = 0; i < 6; i++)
    {
        printf("Subject %d: ",i+1);
        scanf("%d",&marks[i]);

        sum += marks[i];
    }
    average = sum / 6.0;

    printf("Marks entered : ");
    for(int i=0; i<6; i++)
    {
        printf("%d ",marks[i]);
    }
    printf("\n average marks : %.2f\n", average);
    return 0;
}
