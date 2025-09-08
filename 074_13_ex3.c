#include<stdio.h>
void sortarray(int arr[],int size){
    int temp;
    for (int i=0; i<size-1; i++){
        for (int j=i+1; j<size; j++){
        if (arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
}
int main()
{
    int arr[]={5,2,4,3,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    sortarray(arr,size);
    for ( int i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}
