#include <stdio.h>
int main(){
     float length=25.12428;
     float width=12.59;
     float area;

     printf("length:%.4f\n",length);
     printf("width:%.4f\n",width);

     area=length*width;
     printf("Area of a rectangle is:%.4f\n",area);
     return 0;
}
