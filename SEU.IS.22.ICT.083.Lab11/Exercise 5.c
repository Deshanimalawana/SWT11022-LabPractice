#include<stdio.h>
int main(){
    int arr[2][5];
    for(int i=0;i<2;i++){
            printf("Enter marks for student %d:\n",i+1);
        for (int j=0;j<5;j++){
            printf("Subject %d:",j+1);
          scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++){
            printf("student %d marks",i+1);
        for (int j=0;j<5;j++){
          printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
return 0;

}



