#include<stdio.h>

int main(){

char a[10];
char newArr[10];


printf("Enter 10 characters:\n");
for(int i=0;i<10;i++) {
    scanf(" %c ", &a[i]);
}
for (int i=0; i<10; i++){
    newArr[i]=a[i];
}
printf("print 10 characters \n");
for(int i =0;i<10;i++){
    printf("%c\n", a[i]);
}

printf("print duplicate characters\n");
for(int i =0; i<0; i++){
    printf("%c\n",newArr[i]);
}
return 0;


}
