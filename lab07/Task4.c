#include<stdio.h>

int main(){
int num;

while(1){
    printf("Enter number: ");
    scanf("%d", &num);

    if (num<0){
        //printf("Negative number entered. Exiting the loop.\n");
        break;
    }
}
}
