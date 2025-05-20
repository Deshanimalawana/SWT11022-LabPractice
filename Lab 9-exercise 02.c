#include <stdio.h>

void printstars(int n){

for (int i=0; i<n; i++){
    printf("*");
}

  printf("\n");

}

int main(){

    int number;

    printf("Enter the number of stars:");
    scanf("%d", &number);

    printstars(number);
    return 0;

}

