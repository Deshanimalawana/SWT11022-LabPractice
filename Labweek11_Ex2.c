#include <stdio.h>
int main () {

    float num[10];
    float digits = 2.3;
    int ret = 0;

    printf("Enter 10 floating-point numbers:\n");
    for (int i=0; i<10; i++){
        scanf("%f",&num[i]);
    }
    for (int i=0; i<10; i++){
        if (digits == num[i]){
              ret = 1;
                break;
        }
    }
    if(ret){
            printf("\n%.2f is present in array!",digits);
        }else{
        printf("\n%.2f is not present in array!",digits);
        }
return 0;

}
