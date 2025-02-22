#include <stdio.h>
int main(){
    int id = 101;
    char section = 'B';
    float marks = 89.5;

    printf("ID:%d,Section:%c,Marks:%.2f\n",id,section,marks);

    float hours = 30 ;
    int rate = 150;
    float total = hours*rate;

    printf("Hours:%.2f,Rate:%d,Total:%.2f,\n",hours,rate,total);

    return 0;
}
