#include <stdio.h>
int main(){
  int studentID=12345;
  float GPA=3.75;
  char*grade="A";

  printf("Initial Values:\n");
  printf("student ID:%d\n",studentID);
  printf("GPA:%.2f\n",GPA);
  printf("grade:%s\n",grade);

  //updated values
  studentID=54321;
  GPA=3.90;
  grade="A+";

  printf("\nUpdated Values:\n");
  printf("student ID:%d\n",studentID);
  printf("GPA:%.2f\n",GPA);
  printf("grade:%s\n",grade);


  return 0;
  }
