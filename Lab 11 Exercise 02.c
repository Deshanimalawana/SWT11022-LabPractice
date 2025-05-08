#include <stdio.h>

int main(){
    float number[10],target;
    int found=0;

    printf("Enter 10 float number:\n");

    for(int i=0; i<10; i++){
        printf("Number %d:",i+1);
        scanf("%f",&number[i]);

    }
    printf("Enter the number to search:\n");
    scanf("%f",&target);

    for (int i=0; i<10; i++){
        if(number[i]==target){
            found =1;
            break;
        }
    }
    if (found){
        printf("The number %.2f is present in the array.\n",target);

    }else{
        prinf("The number %.2f is not present in the array.\n",target);
    }

    return 0;
}
