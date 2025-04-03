#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[6];
    float sum = 0;
    float Average;

    printf("Enter the marks for 6 subjects:\n");
     for(int i =0;i<6;i++){
        printf("Subject %d:",i+1);
        scanf("%d",&marks[i]);
        sum += marks[i];
     }
     Average = sum/6;

     printf("\nMarks:");
     for(int i = 0;i<6;i++){
        printf("%d",marks[i]);
     }
    printf("\nAverage:%.2f\n",Average);

    return 0;
}
