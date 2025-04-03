#include <stdio.h>

int main(){
    int Sub_marks[6];
    float Average;
    int sum=0;

    printf("Enter Your Subject Marks:\n");

    for(int i=0;i<6;i++){
        scanf("%d",&Sub_marks[i]);
        sum=sum+Sub_marks[i];

    }
    Average = sum/6;
    printf("\nMarks entered:\n");
    for (int i = 0; i < 6; i++) {
        printf("Student marks is %.2f\n",Sub_marks[i]);
    }
    printf("\nAverage: %.2f\n", Average);

return 0;
}
