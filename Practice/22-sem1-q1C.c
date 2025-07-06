#include <stdio.h>

int main(){
    int row=0,cols=0;
    char space = ' ';
    char star = '*';
    printf("Enter row: ");
    scanf("%d",&row);

    printf("\nEnter cols: ");
    scanf("%d",&cols);

    for(int a = 0; a<=cols;a++){
    for (int i = row ;i>=0;i--){
            printf("%c",space*i);
            printf("%c",star*cols);
        }
    }
}