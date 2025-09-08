#include<stdio.h>
int main(){
   int arr[10];
   int Duplicate,uniquecount=0;
   int unique[10];
   printf("Enter 10 numbers\n");
   for(int i=0;i<10;i++){
    scanf("\n%d",&arr[i]);
   }
for (int i=0;i<10;i++){
    Duplicate=0;
for(int j=0;j<i;j++){
    if(arr[i]==arr[j]){
        Duplicate=1;
        break;
    }
    }
    if(!Duplicate){
       unique[uniquecount]=arr[i];
       uniquecount++;
    }
}
   printf("\n\nUnique values:\n");
    for(int i=0;i<uniquecount;i++) {
        printf("%d ",unique[i]);
    }

return 0;
}
