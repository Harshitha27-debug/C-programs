#include <stdio.h>

int main() {
int num1,num2,num3,sum;
float avg;
printf("Enter num1,num2,num3 values : ");
scanf("%d%d%d",&num1,&num2,&num3);

sum = num1+num2+num3;
printf("\nThe sum of three numbers is is %d",sum);
avg = (float)sum/3;
printf("\nThe average of three numbers is %f",avg);

   return 0;
}
