#include<stdio.h>
int main (){
    float payrate;
    int hourse;
    printf("Enter total worked hourse:");
    scanf("%d",&hourse);
    printf("Enter pay rate:");
    scanf("%f",&payrate);
    printf("Your pay rate is:%.2f, worked hourse:%d\n", payrate,hourse);
    return 0;
    }
