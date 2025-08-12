#include <stdio.h>
int main() {
 int a[10],n,i,j,temp;
 printf("Enter n value : ");
 scanf("%d",&n);
 printf("\n Enter array values : ");
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 for(i=0,j=n-1;i<=j;i++,j--){
 temp = a[i];
 a[i]=a[j];
 a[j] =  temp;
 }
 printf("\n After array elements print in reverse");
 for(i=n-1;i>=0;i--){
 printf("%d",a[i]);
 }
 return 0;
 }
