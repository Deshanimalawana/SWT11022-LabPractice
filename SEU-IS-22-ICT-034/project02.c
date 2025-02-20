#include<stdio.h>
int main () {

/*int id = 101;
char section ='B';
float marks = 89.5;
printf("ID:%d, Section:%c,Marks:%.2f\n", id, section, marks);*/

 float payRate;
 int hours;
 printf("Enter total worked hours:");
 scanf("%d", &hours);
 printf("Enter payRate:" );
 scanf("%2f" , &payRate);
 printf("Your pay Rate: %.2f, worked Hours: %d\n", payRate, hours);
 return 0;


}
