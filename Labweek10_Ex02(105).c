#include <stdio.h>
int main () {

    int subject_marks[6];
    float average;
    int sum=0;


    printf("Enter marks of 6 subjects! \n");
    for (int i=0; i<6; i++){
            printf("Subject %d: ",i+1);
        scanf("%d",&subject_marks[i]);

     }
    printf("\nEntered marks!\n");
    for (int i=0;i<6; i++){
            printf("%d ",subject_marks[i]);
    }

    for (int i=0;i<6; i++){

         sum += subject_marks[i];
    }



     average = sum / 6;
    printf("\nAverage mark is %.2f",average);



    return 0;


}
