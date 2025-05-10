#include<stdio.h>
int main(void){
    int a = 5, b = 10, c = 15;
    int largest;
    if (a>b && a>=c){
        largest=a;
    }
    else if (b>=a&&b>=c){
        largest=b;
    }
    else{
        largest=c;
    }
    printf("Largest number:%d\n",(a>=b && a>=c)?a:(b>=a && b>=c)? b:c);

    float average = (a + b + c)/3.0;
    printf("Average:%.2f\n",average);
    return 0;
}
