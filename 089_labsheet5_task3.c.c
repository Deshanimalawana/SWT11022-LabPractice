#include<stdio.h>
int main(){

    int age;

        printf("Enter age:");

        scanf("%d", &age);

if (age>=18) {
   printf("Eligible to vote");
}

else {
    printf("not eligible to vote");
}
  return 0;

}
