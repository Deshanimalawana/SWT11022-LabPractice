#include <stdio.h>
int main() {
    int marks[6];
    int i;
    float average,sum;

    printf("Enter marks for 6 subjects\n");

    for (i=0 ;i<6; i++){
        printf("subject %d : ",i +1);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }

    average = sum/6;
    printf("Entered marks:\n");

    for (int i=0 ;i<6; i++){
        printf("%d\n",marks[i]);
    }

    printf("Average marks :%.2f",average);

    return 0;
}
