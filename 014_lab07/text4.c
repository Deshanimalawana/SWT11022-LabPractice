#include <stdio.h>
int main (){

        int firstEven=0;

        for (int i=1; ; i++){
            if(i % 2 == 0){
                firstEven = i;
                break;
            }
        }
        printf("First even number is : %d \n",firstEven);
        return 0;
}
