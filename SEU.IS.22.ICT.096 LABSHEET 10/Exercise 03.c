#include <stdio.h>
int main() {
    
    float mark[10];
    float highest_num;
    
    printf("Enter 10 marks: ");
    for (int i=0;i<10;i++) {
        scanf("%f",&mark[i]);
    }
    highest_num=mark[0];
    for (int i=1;i<10;i++) {
        if (mark[i]>highest_num) {
            highest_num=mark[i];
        }
    }
        
    printf("Highest mark = %.2f",highest_num);
    
    return 0;
}