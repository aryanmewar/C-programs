// C PROGRAM TO CHECK A GIVEN STRING IS A PALINDROME OR NOT....

#include<stdio.h>
#include<string.h>
int main()
{char str1[50], str2[50];
printf("\n enter the string to check for panlidrome: ");
gets(str1);
strcpy(str2,str1); //copy str1 to str2
strrev(str2); //reverse of str2
if(strcmp(str1,str2)==0)
printf("string is palindrome...");
else
printf("string is not palindrome....");

return 0;
}
