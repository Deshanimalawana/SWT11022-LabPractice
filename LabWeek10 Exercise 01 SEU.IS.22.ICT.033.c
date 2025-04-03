#include <stdio.h>
int main(){
int marks[5];
marks[0]=98;
int ages[5]={21,21,23,24,25};
ages[1]=27;

int students_marks[5];
for(int i=1;i<=5;i++){
    printf("%d student mark:",i);
    scanf("%d",&students_marks[i]);
}
printf("\n\n marks:\n");
for (int i=1;i<=5;i++){
    printf("%d student mark:%d\n",i,students_marks[i]);
}

return 0;
}
