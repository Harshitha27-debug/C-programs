#include <stdio.h>
int main() {
float units;
float Electricitybill;
printf("Enter the units : ");
scanf("%f",&units);
if(units<=150&&units>=0){
Electricitybill = 3*units;
printf("The electricity bill is %f",Electricitybill);
}
else if(units>=151&&units<=350){
Electricitybill = 100 + 3.75*units;
printf("The electricity bill is %f",Electricitybill);
}
else if(units>=351&&units<=450){
Electricitybill = 250 + 4*units;
printf("The electricity bill is %f",Electricitybill);
}
else if(units>=451&&units<=600){
printf("The electricity bill is %f",Electricitybill);
}
else if(units>600){
Electricitybill = 400 + 5*units;
printf("The electricity bill is %f",Electricitybill);
}
else{
printf("Invalid input");
}
}
