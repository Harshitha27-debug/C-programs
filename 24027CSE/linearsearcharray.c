#include <stdio.h>
int main() {
int a[n];
int n,target,i,count=0;
printf("Enter n value : ");
scanf("%d",&n);
printf("\n Enter target element ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
printf("\n Enter target element");
scanf("%d",&target);
}
for(i=0;i<n;i++){
if(a[i]==target){
printf("\n the target element is present in an array at %d index ",i);
count++;
break;
}
}
if(count==0){
printf("\n The target no found or search unsuccessful");
}
else{
printf("\nsearch successful");
}
return 0;
}
