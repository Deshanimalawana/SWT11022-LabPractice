#include <stdio.h>

int main() {
    int Marks[5];
    Marks[0]=90;


    int Age[5] = {21, 21, 23, 24, 25};
    Age[1] = 27;

    int Student_marks[5];
    printf("Enter the Marks:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &Student_marks[i]);
    }

    printf("Entered Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", Student_marks[i]);
    }
    return 0;
}
