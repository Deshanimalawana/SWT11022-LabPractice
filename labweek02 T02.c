 #include <stdio.h>
int main(){
float payrate;
int hours;
printf("enter total work hours:");
scanf("%d",&hours);
printf("enter pay rate:");
scanf("%f", &payrate);
printf("your payrate: %.2f,worked hours: %d\n", payrate, hours);
return 0;
}
