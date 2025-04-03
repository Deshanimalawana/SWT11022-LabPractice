#include<stdio.h>
int main(){

float abc[10];
float max;

printf("Enter 10 student marks:\n");


for(int i=0;i<10;i++){
    printf("Enter marks:",i+1);
    scanf("%f",&abc[i]);
}

max=abc[0];
 for (int i = 1; i < 10; i++) {
        if (abc[i] > max) {
            max = abc[i];
        }
 }


 printf("The highest mark is: %.2f\n", max);


return 0;

}

