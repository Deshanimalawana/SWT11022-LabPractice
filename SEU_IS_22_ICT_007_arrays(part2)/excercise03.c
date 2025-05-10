#include<stdio.h>
int  main(){
    int arr1[10];
    int arr2[10];
    int  num1;
    printf("enter 10  number:");

    for(int i=0;i<10;i++){
        scanf("%d",&num1);
    arr1[i]=num1;
    arr2[i]=arr1[i];}
    printf("original array:");
    for(int  i=0;i<10;i++){
        printf("%d",arr1[i]);
        
    }
    printf("\ndublicated  array:");
    for(int i=0;i<10;i++){
        printf("%d",arr2[i]);
        
        
    }
    
    
    
}