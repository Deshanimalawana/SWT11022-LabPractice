#include <stdio.h>
 int main() {
   int studentID;
   float GPA;
   char grade;
   char Grade;

   studentID=12345;
   GPA=3.75;
   grade='A';

   printf("studentID:%d\n",studentID);
   printf("GPA:%f\n",GPA);
   printf("Grade:%c\n",grade);

   studentID=54321;
   GPA=3.90;
   grade='A';
   Grade='+';

   printf("updated studentID:%d\n",studentID);
   printf("updated GPA:%f\n",GPA);
   printf("updated grade:%c%c\n",grade,Grade);


   return 0;





 }
