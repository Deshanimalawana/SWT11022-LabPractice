#include<stdio.h>
int main(){
float numbers[10];

float maxvalue;


for(int i=0; i<10;i++){
    printf("enter %d number:",i+1);
    scanf(" %f",&numbers[i]);
}
maxvalue=numbers[0];

for(int i=0; i<10;i++){if(numbers[i]>maxvalue){
    maxvalue=numbers[i];
}

}
printf("maxvalue=%.2f",maxvalue);
}
