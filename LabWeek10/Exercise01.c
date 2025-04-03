#include <stdio.h>
int main(){
int marks[5];
marks[0] = 98;
int age[5] = {21,21,23,24,25};
age[1] = 27;
int students_marks[5];
for(int i = 0; i<5;i++){
    printf("Enter the student marks:");
    scanf("%d",&students_marks[i]);
}

for(int a = 0; a<5;a++){
    printf("%d\n",students_marks[a]);
}
return 0;
}


