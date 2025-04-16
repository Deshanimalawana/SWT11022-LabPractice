#include<stdio.h>
int main(){

char array[10],new_array[10];
int i;

printf("Enter 10 characters:\n");
for(i=0;i<10;i++){
    printf("Characters:");
    scanf("%c",&array[i]);

}


for(i = 0; i < 10; i++) {
       new_array [i] = array[i];
    }

 printf("\nOriginal Array: ");
    for(i = 0; i < 10; i++) {
        printf("%c ", array[i]);
    }


printf("\nCopied Array:   ");
    for(i = 0; i < 10; i++) {
        printf("%c ", new_array[i]);
    }



return 0;
}
