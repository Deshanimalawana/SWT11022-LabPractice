  #include<stdio.h>

  int main() {

      int x = 10, y = 4;
      int isGreaterThan = (x > y);
      int isEqual = (x==y);
      int isNotEqual = (x != y);

      printf("Is X greater than y? %s\n", isGreaterThan ? "Yes" : "No");
      printf("Is X equal to Y? %s\n", isEqual ? "Yes" : "No");
      printf("Is X not equal to Y? %S\n", isNotEqual ? "yes": "No");

      return 0;

  }
