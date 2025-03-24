#include<stdio.h>
int main () {
int num;
for (num=1;  num<=20;  num++) {
    if (num%2!=0){
        continue;
    }
    printf("%d ",num);
}
printf("\n");
return 0;
}
