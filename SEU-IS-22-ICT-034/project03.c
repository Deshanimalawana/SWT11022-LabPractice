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
 float total = payRate*hours;
 printf("Your Salary : $%2f",total);
 return 0;


}
