#include <stdio.h>
int main() {
int a[10],n,target,i,count=0;
printf("Enter n value : ");
scanf("%d",&n);
printf("\n Enter array values");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
printf("\n Enter target element");
scanf("%d",&target);
for(i=0;i<n;i++){
if(a[i]==target){
printf("The target element is present in an array");
}
}
if(count==0){
printf("The target is not found ");
}
else{
 printf("The target is %d",target);
 }
}
return 0;
}
