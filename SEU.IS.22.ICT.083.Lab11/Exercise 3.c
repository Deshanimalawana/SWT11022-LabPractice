#include<stdio.h>
int main(){
   char arr[10];
   char array[10];
   printf("Enter 10 letters\n");
   for(int i=1;i<=10;i++){
   scanf("\n%c",&arr[i]);
   }
   for(int i=1;i<=10;i++){
   array[i]=arr[i];
   }
printf("\nOriginal Values:\n");
for(int i=1;i<=10;i++){
        printf("%c\n",arr[i]);
}
printf("\nDuplicate Values:\n");
for(int i=1;i<=10;i++){
        printf("%c\n",array[i]);
}
return 0;
}
