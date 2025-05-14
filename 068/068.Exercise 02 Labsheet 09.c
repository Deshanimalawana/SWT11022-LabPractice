#include <stdio.h>
#include <stdlib.h>

void printstars(int n){
    for(int i = 0;i<n;i++){
        printf("*");
    }
    printf("\n");
}
int main(){
    int stars;
    printf("Enter the numbers of star : ");
    scanf("%d",&stars);
    printstars(stars);
    return 0;
}
