#include <stdio.h>
#include <stdlib.h>
void sortnum(int num[],int n){
    for(int i=0; i<n-1; i++){
        for(int x=0; x<n-1; x++){
            if(num[x]> num[x+1]){
                int temp = num[x];
                num[x]= num[x+1];
                num[x+1] = temp;
            }
        }
    }
}
void printarray(int num[], int n){
    for (int i=0; i<n; i++){
        printf("%d", num[i]);
    }
}
int main()
{
    int n,i;
    //int num[n];
    printf("How many numbers  do you need to sort: ");
    scanf("%d", &n);
    printf("Input those numbers: ");
    int *num = (int *)malloc(n * sizeof(int));  // Dynamic array allocation
    if (num == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(i=0; i<n;i++){
        scanf("%d",&num);
    }


    /*int *num_arr;
    num_arr = &num[n];*/

    sortnum(num,n);
    printarray(num,n);
    free(num);
    return 0;
}
