
#include<stdio.h>
int main(){

    char oriArr[10]={'a','b','c','d','e','f','g','h','i','j'};
    char dupArr[10];
    int i;

for(i=0;i<10;i++) {
       dupArr[i] = oriArr[i];
    }


     printf("Original Array: \n");
    for(i = 0; i < 10; i++) {
        printf("%c ",oriArr[i]);
    }
    printf("\n");


printf("Duplicate Array: \n");
    for(i = 0; i < 10; i++) {
        printf("%c ",dupArr[i]);
    }
     printf("\n");





return 0;


}
