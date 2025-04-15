#include <stdio.h>
int main () {

    int marks1[5];
    int marks2[5];

    printf("Enter marks of 5 subjects of student No 1:\n");
    for (int i=0; i<5; i++){
        printf("Subject %d: ",i + 1);
        scanf("%d",&marks1[i]);
    }

    printf("\nEnter marks of 5 subjects of student No 2:\n");
    for (int i=0; i<5; i++){
        printf("Subject %d: ",i + 1);
        scanf("%d",&marks2[i]);
    }

    printf("\nMarks of student No 1:");
    for (int i=0; i<5; i++){
        printf("\nSubject %d: %d",i + 1,marks1[i]);
    }

     printf("\n");
     printf("\nMarks of student No 2:\n");
    for (int i=0; i<5; i++){
        printf("Subject %d: %d\n",i + 1,marks2[i]);
    }
    return 0;
}
