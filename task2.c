#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(90 <= marks){
        printf("Excellent");
    }else if(75 <= marks){
        printf("Very Good");
    }else if(50 <= marks){
        printf("Good");
    }else{
        printf("Fail");
    }
    return 0;
}
