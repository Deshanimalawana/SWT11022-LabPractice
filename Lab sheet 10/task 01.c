/*#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int i=0;
    while(i<5){
        printf("%d\n",arr[i]);
        i++;
    }
    return 0;
}
*/
#include <stdio.h>

int main() {
    int marks[5];
    marks[0] = 98;
    printf("marks: %d\n\n",marks[0]);

    int ages[5] = {21, 21, 23, 24, 25};
    ages[1] = 27;

    printf("ages :");
    for(int i=0; i<5; i++){
        printf("%d,",ages[i]);
    }

    int students_marks[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter mark for student %d: ", i + 1);
        scanf("%d", &students_marks[i]);
    }

    printf("Students' Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", students_marks[i]);
    }
    printf("\n");

    return 0;
}
