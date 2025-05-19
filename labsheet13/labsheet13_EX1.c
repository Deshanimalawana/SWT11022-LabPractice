#include<stdio.h>
int main(){

int arr[3][3]={
{34,81,96},{72,48,24},{80,10,71}
};
int (*ptr)[3]=arr;
int sum=0;


printf("Adress of arrays:%p\n", &arr);
printf("\n");

printf("Address of first row:%p\n", &arr[0]);
printf("Address of second row:%p\n", &arr[1]);
printf("Address of third row:%p\n", &arr[2]);
printf("\n");


 for(int i =0;i<3;i++){
    for(int k=0;k<3;k++){
        printf("Address of element:[%d][%d]%p\n", i,k,&ptr[i][k]);
    }
 }

printf("\n");

for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
     printf("element of arrays:[%d][%d][%d]\n",i,k,ptr[i][k]);
    }
}

for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
        sum = sum+*(*(ptr+i)+k);
    }
}
printf("sum of all elements:%d\n", sum);
return 0;

}
