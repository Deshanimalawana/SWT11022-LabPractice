#include<stdio.h>
int main(){
    float nList[10], Num;
    int Tf;

    printf("Enter Any Value....\n");
    for(int i = 0; i < 10; i++){
        scanf("%f",&nList[i]);
    }

    printf("\nEnter Another Value...\n");
    scanf("%f",&Num);

    for(int i = 0; i < 10; i++){
        if(Num == nList[i]){
            Tf = 1;
            break;
        }else {
            Tf = 0;
        }
    }

    if(Tf == 1) {
        printf("\n%.2f is in the List you entered.",Num);
    } else {
        printf("\n%.2f is not in the List you entered.",Num);
    }

    return 0;
}
