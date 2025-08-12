#include <stdio.h>
main() {
int m1,m2,m3,m4,m5,percentage,total;
printf("Enter the subject wise marks : ");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total = m1+m2+m3+m4+m5;
percentage = total/500*100;
if(percentage>=75){
printf("The student is under Distinction");
}
else if(percentage>=60&&percentage <75){
printf("The student is under 1st class");
}
else if(percentage>=50&&percentage<60){
printf("The student is under 2nd class");
}
else if(percentage>=40&&percentage<50){
printf("The student is under 3rd class");
}
else{
printf("The student failed in the exams");
}
}
