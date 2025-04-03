#include <stdio.h>
int main() {
    
    int marks[6];
    int sum = 0, average;
    
    printf("\nEnter 6 marks average: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    
    average= sum/6;
    
    printf("User's marks: ");
    for (int i=0;i< 6;i++) {
        printf("%d ",marks[i]);
    }
    printf("Average marks=%d",average);
    
  return 0;
}