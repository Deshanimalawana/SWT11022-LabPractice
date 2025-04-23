#include <stdio.h>
int main(){
    float float_array[10],F_Num;
    int i,found = 0;

    printf("Enter 10 Decimal Num => \n");

    for(i=0; i<10; i++){
        scanf("%f",&float_array[i]);
    }

    printf("Enter a float num : ");
    scanf("%f",&F_Num);

    for(i=0; i<10; i++){
        if(F_Num == float_array[i]){
            found = 1;
        }
    }
    if(found){
        printf("%.2f is present in array.",F_Num);
    }else{
        printf("%.2f is not present in array.",F_Num);
    }
    return 0;
}
