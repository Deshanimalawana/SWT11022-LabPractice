#include <stdio.h>


int main()
{
    int subject_marks[6];
    float Average_value;
    float sum;
    sum=0;

    printf("Enter Six students marks:\n");

    for(int x=0; x<6; x++) {
        printf("Subject marks %d: ", x+1);
        scanf("%d",&subject_marks[x]);
        sum +=subject_marks[x];
    }

    Average_value=sum/6;

    printf("Entered marks:\n");
    for(int x=0; x<6; x++) {
        printf("Subject %d:%d\n",x+1,subject_marks[x]);

    }
    printf("Average Marks:%lf\n",Average_value);
    return 0;
}
