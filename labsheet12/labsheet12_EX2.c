#include<stdio.h>
int main(){
int number[10];
int *ptr;
int sum=0;

ptr = number;

printf("Enter 10 integer numbers:\n");
for (int i =0; i<10;i++){
scanf("%d", ptr +i);
}

for(int i=0;i<10;i++){
    sum = sum + *(ptr+1);
}

printf("sum of 10 numbers:%d\n", sum);
return 0;


}
