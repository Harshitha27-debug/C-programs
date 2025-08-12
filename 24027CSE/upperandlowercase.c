#include <stdio.h>
main() {
char ch;
printf("Enter the character : ");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z'){
ch = ch+32;
printf("The character is changed form uppercase to lowercase %c",ch);
}
else if(ch>='a'&&ch<='z'){
ch=ch-32;
printf("The character is changed from lowercase to uppercase %c",ch);
}
else{
printf("Invalid input entered");
}
}
