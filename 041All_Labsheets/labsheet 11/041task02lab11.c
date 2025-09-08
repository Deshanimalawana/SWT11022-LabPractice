#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, present=0;
    float fnum[10];
    float fnum2;
    printf("Enter the ten floating numbers: ");

    for(i=0; i<10; i++){
        scanf("%f", &fnum[i]);
    }
    printf("\nEnter the check numbers: ");
    scanf("%f", &fnum2);
    for (i=0; i<10; i++){
        if(fnum2==fnum[i]){
            present=1;
            break;
        }else{
            present=0;
        }
    }
    if(present){
        printf("The %.2f number in array." , fnum2);
    }else{
        printf("The %.2f number not in array.", fnum2);
    }
    return 0;
}
