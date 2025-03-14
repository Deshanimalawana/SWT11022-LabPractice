#include <stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter age: ");
    scanf("%d,%d,%d",&n1,&n2,&n3);

    if (n1>n2){
        if (n1>n3){
            printf("the largest number is:%d",n1);
        }
        else {
            printf("the largest number is:%d",n3);
        }
        }
    else {
        if (n2>n3){
                printf("the largest number is:%d",n2);
        }
        else{
            printf("the largest number is:%d",n3);
        }
    }

return 0;
}
