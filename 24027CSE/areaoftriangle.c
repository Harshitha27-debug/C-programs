#include <stdio.h>
int main (){
   int a, b, c;
   int area;
   int s;
 printf("Enter length of three sides");
 scanf("%d""%d""%d",&a,&b,&c);
 s=(a+b+c)/2;
 area = sqrt(s*(s-a)*(s-b)*(s-c));
 printf("Area of a triangle is : %d",area);
}
