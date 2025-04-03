#include<stdio.h>
int main(){

int marks[5];
marks[0]=98;

int ages[5]={21,21,23,24,25};

ages[1]=27;

int studentmarks[5];

printf("Enter five marks \n:");

for (int i=1;i<5;i++){
printf("%d",i);
scanf("%d",&studentmarks[i]);

}

printf("Entered marks\n");
for(int i=0;i<5;i++){
    printf("%d",studentmarks[i]);
}


return 0;
}
