#include <stdio.h>
int main(){

float points[10];

printf("input students marks for find maximum value\n");

for (int i=1;i<=10;i++){
    printf("%d student mark:",i);
    scanf("%f",&points[i]);
}
float max=points[0];
for (int i=0;i<10;i++){
    if (points[i]>max){
        max=points[i];
    }
}
printf("Maximum value:%.2f",max);

return 0;
}
