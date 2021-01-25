//write the program to identify vowel and consonant using switch case
#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("enter the character = ");
scanf("%c",&ch);
switch(toupper(ch))
{
 case 'A':
 printf("vowel");
 break;
 case 'E':
 printf("vowel");
 break;
 case 'I':
 printf("vowel");
 break;
 case 'O':
 printf("vowel");
 break;
 case 'U':
 printf("vowel");
 break;
 default:
 printf("consonant");
}
return 0;

}
