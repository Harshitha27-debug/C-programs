#include <stdio.h>
int main() {
int a[10],n,i,sum=0;
printf("Enter n values :");
scanf("%d",&n);

 printf("\n Enter array values :");
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
 sum = sum + a[i];
 }
 printf("the sum of the array is %d",sum);
 return 0;
}
