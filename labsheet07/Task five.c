#include<stdio.h>
int main(){
for (int i =2; i<=20; i+=2){
    if(i % 2 !=0){
        continue;
    }
    printf("%d", i);
}
printf("\n");
return 0;


}
