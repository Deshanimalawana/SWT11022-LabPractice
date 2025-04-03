#include<stdio.h>
int main(){

int array[5]={10,20,30,40,50};
int size=sizeof(array)/sizeof(array[0]);

for(int i=0;i<size;i++){



    printf("%d\n",array[i]);



}


return 0;
}
