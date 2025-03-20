#include<stdio.h>
int main(){

for(int i=1;i<=20;i++){

    if(i%2!=0){

        printf("This is odd number:%d\n",i);
        continue;
    }
    printf("%d",i);
}


return 0;
}
