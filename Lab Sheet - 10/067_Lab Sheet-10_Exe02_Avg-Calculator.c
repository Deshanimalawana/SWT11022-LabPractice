#include <stdio.h>
int main ()
{
    int Sub_Marks[6];
    float Average;
    int sum = 0;

    printf("Enter Your Six Subjects Marks :-  ");

    for (int m = 0; m < 6; m++) {
        scanf("%d", &Sub_Marks[m]);
        printf("Subject %d Marks is = %d\n", m + 1, Sub_Marks[m]);
    }

    sum = Sub_Marks[0] + Sub_Marks[1] + Sub_Marks[2] + Sub_Marks[3] + Sub_Marks[4] + Sub_Marks[5];

    Average = sum / 6;

    printf("\nYour Total Marks is = %d\n", sum);
    printf("Your Subject Marks Average is = %.2f\n", Average);

    return 0;


}
