#include <stdio.h>
#include <math.h>

int main() {
int p,t,r,n;
int A;
int CI;
printf("Enter principal amount :");
scanf("%d",&p);
printf("Enter the rate of interest : ");
scanf("%d",&r);
printf("Enter time : ");
scanf("%d",&t);
printf("Enter the number of times the compound interest is calculated :");
scanf("%d",&n);
A = p*pow((1+(r/n)),(n*t));
CI = A-p;
printf("The compound interest is : %d",CI);
}
