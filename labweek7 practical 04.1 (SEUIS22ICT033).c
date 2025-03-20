#include <stdio.h>
int main (){

int FirstEven=0;
for (int i=1;;i++){
    if(i%2==0){
    FirstEven=i;
    break;
    }
}
printf("The first even number is:%d\n",FirstEven);
return 0;
}
