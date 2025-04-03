#include<stdio.h>
int main(){
    int marks[6];
    float avg;
    int s=0;
    printf("Enter marks for student:\n");
    for (int i =0;i<5;i=i+1){

        scanf("%d",&marks[i]);
        s=s+marks[i];



}
    avg=s/6;
    printf("Enterd marks:");
    for(int i =0;i<5;i=i+1){
        printf("%d \n",marks[i]);
}
      printf("Avrage:%f\n",avg);
      return 0;
}
