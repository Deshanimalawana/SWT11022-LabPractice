#include<stdio.h>

void printStars(int n){
// print *
for (int i =0; i<n; i++){
    printf("*");
}
printf ("\n");

}
int main(){
int Number;

    printf("Enter the number of stars:");
     scanf("%d", &Number);
    printStars(Number);
    return 0;
}
