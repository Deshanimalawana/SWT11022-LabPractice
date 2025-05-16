#include <stdio.h>

int main(){
    int arr[10],sum,*Total;

    Total=&sum;

    printf("Enter the number :");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        *Total+=arr[i];

    }
        printf("The Total is %d",*Total);
    return 0;

}
