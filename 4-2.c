#include<stdio.h>
#include<stdbool.h>
int main(){

bool israiny=false;
bool isholiday=true;
bool isweekend=true;

printf("The students can go on a trip:%s\n",(!israiny&&(isholiday || isweekend))?"Yes":"No");




return 0;
}
