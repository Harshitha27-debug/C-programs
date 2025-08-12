#include <stdio.h>
main() {
int a,b;
char ch;
printf("Enter the operator : ");
scanf("%c",&ch);
printf("Enter values : ");
scanf("%d%d",&a,&b);
switch(ch) {
case '+' :
printf("The addition of two numbers is %d",a+b);
break;
case '-' :
printf("The subtraction of two numbers is %d",a-b);
break;
case '*' :
printf("The multiplication of two numbers is %d",a*b);
break;
case '/' :
printf("The division of two numbers is %d",a/b);
break;
case '%' :
printf("The modulo division of two numbers is %d",a%b);
break;
default :
printf("Invalid input");
}
}
