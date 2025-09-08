#include<stdio.h>
int main()
{
    float max_value;
    int sub_marks[10];
    for(int i=0;   i<10; i++){
        printf("Enter a marks :");
        scanf("%d",&sub_marks[i]);


    }
    printf("\nsubject_marks :");
    for(int i=0; i<=9; i++){
        printf("%d,",sub_marks[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (sub_marks[i] > max_value) {
            max_value = sub_marks[i];
        }
    }
    printf("\nThe highest mark is: %.2f\n", max_value);
    return 0;
}
