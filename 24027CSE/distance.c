#include <stdio.h>
int main() {
float speed,distance,time;
printf("Enter the speed of the object :");
scanf("%f",&speed);
printf("\n Enter the time taken by the object to cover the distance :");
scanf("%f",&time);
distance = speed*time;
printf("The distance travelled by the object is %f :",distance);
return 0;
}
